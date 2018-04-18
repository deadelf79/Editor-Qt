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
#include "../lsd_reader.h"
#include "lsd_chunks.h"
#include "../reader_struct.h"

// Read SaveMapInfo.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveMapInfo

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, position_x),
	LCF_STRUCT_TYPED_FIELD(int, position_y),
	LCF_STRUCT_TYPED_FIELD(int, encounter_rate),
	LCF_STRUCT_TYPED_FIELD(int, chipset_id),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveMapEvent>, events),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, lower_tiles),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, upper_tiles),
	LCF_STRUCT_TYPED_FIELD(std::string, parallax_name),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_horz),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_vert),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_horz_auto),
	LCF_STRUCT_TYPED_FIELD(int, parallax_horz_speed),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_vert_auto),
	LCF_STRUCT_TYPED_FIELD(int, parallax_vert_speed),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
