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
#include "../ldb_reader.h"
#include "ldb_chunks.h"
#include "../reader_struct.h"

// Read TroopPageCondition.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT TroopPageCondition

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::TroopPageCondition::Flags, flags),
	LCF_STRUCT_TYPED_FIELD(int, switch_a_id),
	LCF_STRUCT_TYPED_FIELD(int, switch_b_id),
	LCF_STRUCT_TYPED_FIELD(int, variable_id),
	LCF_STRUCT_TYPED_FIELD(int, variable_value),
	LCF_STRUCT_TYPED_FIELD(int, turn_a),
	LCF_STRUCT_TYPED_FIELD(int, turn_b),
	LCF_STRUCT_TYPED_FIELD(int, fatigue_min),
	LCF_STRUCT_TYPED_FIELD(int, fatigue_max),
	LCF_STRUCT_TYPED_FIELD(int, enemy_id),
	LCF_STRUCT_TYPED_FIELD(int, enemy_hp_min),
	LCF_STRUCT_TYPED_FIELD(int, enemy_hp_max),
	LCF_STRUCT_TYPED_FIELD(int, actor_id),
	LCF_STRUCT_TYPED_FIELD(int, actor_hp_min),
	LCF_STRUCT_TYPED_FIELD(int, actor_hp_max),
	LCF_STRUCT_TYPED_FIELD(int, turn_enemy_id),
	LCF_STRUCT_TYPED_FIELD(int, turn_enemy_a),
	LCF_STRUCT_TYPED_FIELD(int, turn_enemy_b),
	LCF_STRUCT_TYPED_FIELD(int, turn_actor_id),
	LCF_STRUCT_TYPED_FIELD(int, turn_actor_a),
	LCF_STRUCT_TYPED_FIELD(int, turn_actor_b),
	LCF_STRUCT_TYPED_FIELD(int, command_actor_id),
	LCF_STRUCT_TYPED_FIELD(int, command_id),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
