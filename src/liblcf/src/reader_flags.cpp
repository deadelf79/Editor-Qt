/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "reader_struct.h"
#include "generated/rpg_trooppagecondition.h"
#include "generated/rpg_eventpagecondition.h"
#include "generated/rpg_terrain.h"
#include "generated/rpg_savepicture.h"

// Templates

template <class S>
void Flags<S>::MakeTagMap() {
	if (!tag_map.empty())
		return;
	for (int i = 0; flags[i] != NULL; i++)
		tag_map[flags[i]->name] = flags[i];
}

template <class S>
void Flags<S>::ReadLcf(S& obj, LcfReader& stream, uint32_t length) {
	assert(length >= 1 && length <= max_size);
	uint8_t bitflag;
	for (int i = 0; flags[i] != NULL; i++) {
		if (i % 8 == 0) {
			if (i / 8 >= (int) length)
				break;
			stream.Read(bitflag);
		}
		bool S::*ref = flags[i]->ref;
		obj.*ref = ((bitflag >> (i % 8)) & 0x1) != 0;
	}
}

template <class S>
void Flags<S>::WriteLcf(const S& obj, LcfWriter& stream) {
	uint8_t bitflag = 0;
	for (int i = 0; flags[i] != NULL; i++) {
		if (i % 8 == 0) {
			if (i > 0)
				stream.Write(bitflag);
			bitflag = 0;
		}
		bool S::*ref = flags[i]->ref;
		if (obj.*ref)
			bitflag |= (1 << (i % 8));
	}

	if (bitflag != 0 || max_size == 1)
		stream.Write(bitflag);
}

template <class S>
int Flags<S>::LcfSize(const S& obj, LcfWriter& /* stream */) {
	int result = 0;
	for (int i = 0; flags[i] != NULL; i++) {
		bool S::*ref = flags[i]->ref;
		if (obj.*ref)
			result = i / 8;
	}
	return result + 1;
}

template <class S>
void Flags<S>::WriteXml(const S& obj, XmlWriter& stream) {
	stream.BeginElement(name);
	for (int i = 0; flags[i] != NULL; i++) {
		const Flag* flag = flags[i];
		bool S::*ref = flag->ref;
		stream.WriteNode<bool>(flag->name, obj.*ref);
	}
	stream.EndElement(name);
}

template <class S>
class FlagsXmlHandler : public XmlHandler {
private:
	S& obj;
	bool* field;
public:
	FlagsXmlHandler(S& obj) : obj(obj), field(NULL) {
		Flags<S>::MakeTagMap();
	}

	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		const typename Flags<S>::Flag* flag = Flags<S>::tag_map[name];
		if (flag != NULL) {
			bool S::*ref = flag->ref;
			field = &(obj.*ref);
		}
		else {
			stream.Error("Unrecognized field '%s'", name);
			field = NULL;
		}
	}
	void EndElement(XmlReader& /* stream */, const char* /* name */) {
		field = NULL;
	}
	void CharacterData(XmlReader& /* stream */, const std::string& data) {
		if (field != NULL)
			XmlReader::Read<bool>(*field, data);
	}
};

template <class S>
void Flags<S>::BeginXml(S& obj, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler(name, new FlagsXmlHandler<S>(obj)));
}

// Instantiate templates
#ifdef _MSC_VER
#pragma warning (disable : 4661)
#endif

template class Flags<RPG::TroopPageCondition::Flags>;
template class Flags<RPG::EventPageCondition::Flags>;
template class Flags<RPG::Terrain::Flags>;
template class Flags<RPG::SavePicture::Flags>;
