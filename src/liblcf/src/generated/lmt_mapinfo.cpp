/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "../lmt_reader.h"
#include "lmt_chunks.h"
#include "../reader_struct.h"

// Read MapInfo.

#define LCF_CHUNK_SUFFIX LMT_Reader
#define LCF_CURRENT_STRUCT MapInfo

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(int, parent_map),
	LCF_STRUCT_TYPED_FIELD(int, indentation),
	LCF_STRUCT_TYPED_FIELD(int, type),
	LCF_STRUCT_TYPED_FIELD(int, scrollbar_x),
	LCF_STRUCT_TYPED_FIELD(int, scrollbar_y),
	LCF_STRUCT_TYPED_FIELD(bool, expanded_node),
	LCF_STRUCT_TYPED_FIELD(int, music_type),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, music),
	LCF_STRUCT_TYPED_FIELD(int, background_type),
	LCF_STRUCT_TYPED_FIELD(std::string, background_name),
	LCF_STRUCT_TYPED_FIELD(int, teleport),
	LCF_STRUCT_TYPED_FIELD(int, escape),
	LCF_STRUCT_TYPED_FIELD(int, save),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Encounter>, encounters),
	LCF_STRUCT_TYPED_FIELD(int, encounter_steps),
	LCF_STRUCT_TYPED_FIELD(RPG::Rect, area_rect),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
