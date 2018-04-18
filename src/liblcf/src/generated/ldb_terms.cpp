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

// Read Terms.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Terms

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, encounter),
	LCF_STRUCT_TYPED_FIELD(std::string, special_combat),
	LCF_STRUCT_TYPED_FIELD(std::string, escape_success),
	LCF_STRUCT_TYPED_FIELD(std::string, escape_failure),
	LCF_STRUCT_TYPED_FIELD(std::string, victory),
	LCF_STRUCT_TYPED_FIELD(std::string, defeat),
	LCF_STRUCT_TYPED_FIELD(std::string, exp_received),
	LCF_STRUCT_TYPED_FIELD(std::string, gold_recieved_a),
	LCF_STRUCT_TYPED_FIELD(std::string, gold_recieved_b),
	LCF_STRUCT_TYPED_FIELD(std::string, item_recieved),
	LCF_STRUCT_TYPED_FIELD(std::string, attacking),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_critical),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_critical),
	LCF_STRUCT_TYPED_FIELD(std::string, defending),
	LCF_STRUCT_TYPED_FIELD(std::string, observing),
	LCF_STRUCT_TYPED_FIELD(std::string, focus),
	LCF_STRUCT_TYPED_FIELD(std::string, autodestruction),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_escape),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_transform),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_damaged),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_undamaged),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_damaged),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_undamaged),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_failure_a),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_failure_b),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_failure_c),
	LCF_STRUCT_TYPED_FIELD(std::string, dodge),
	LCF_STRUCT_TYPED_FIELD(std::string, use_item),
	LCF_STRUCT_TYPED_FIELD(std::string, hp_recovery),
	LCF_STRUCT_TYPED_FIELD(std::string, parameter_increase),
	LCF_STRUCT_TYPED_FIELD(std::string, parameter_decrease),
	LCF_STRUCT_TYPED_FIELD(std::string, enemy_hp_absorbed),
	LCF_STRUCT_TYPED_FIELD(std::string, actor_hp_absorbed),
	LCF_STRUCT_TYPED_FIELD(std::string, resistance_increase),
	LCF_STRUCT_TYPED_FIELD(std::string, resistance_decrease),
	LCF_STRUCT_TYPED_FIELD(std::string, level_up),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_learned),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_start),
	LCF_STRUCT_TYPED_FIELD(std::string, miss),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_greeting1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_regreeting1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_leave1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_select1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_number1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_purchased1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_select1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_number1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sold1),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_greeting2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_regreeting2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_leave2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_select2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_number2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_purchased2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_select2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_number2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sold2),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_greeting3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_regreeting3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_leave3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_select3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_buy_number3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_purchased3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_select3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sell_number3),
	LCF_STRUCT_TYPED_FIELD(std::string, shop_sold3),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_greeting_1),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_greeting_2),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_greeting_3),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_accept),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_a_cancel),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_greeting_1),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_greeting_2),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_greeting_3),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_accept),
	LCF_STRUCT_TYPED_FIELD(std::string, inn_b_cancel),
	LCF_STRUCT_TYPED_FIELD(std::string, possessed_items),
	LCF_STRUCT_TYPED_FIELD(std::string, equipped_items),
	LCF_STRUCT_TYPED_FIELD(std::string, gold),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_fight),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_auto),
	LCF_STRUCT_TYPED_FIELD(std::string, battle_escape),
	LCF_STRUCT_TYPED_FIELD(std::string, command_attack),
	LCF_STRUCT_TYPED_FIELD(std::string, command_defend),
	LCF_STRUCT_TYPED_FIELD(std::string, command_item),
	LCF_STRUCT_TYPED_FIELD(std::string, command_skill),
	LCF_STRUCT_TYPED_FIELD(std::string, menu_equipment),
	LCF_STRUCT_TYPED_FIELD(std::string, menu_save),
	LCF_STRUCT_TYPED_FIELD(std::string, menu_quit),
	LCF_STRUCT_TYPED_FIELD(std::string, new_game),
	LCF_STRUCT_TYPED_FIELD(std::string, load_game),
	LCF_STRUCT_TYPED_FIELD(std::string, exit_game),
	LCF_STRUCT_TYPED_FIELD(std::string, status),
	LCF_STRUCT_TYPED_FIELD(std::string, row),
	LCF_STRUCT_TYPED_FIELD(std::string, order),
	LCF_STRUCT_TYPED_FIELD(std::string, wait_on),
	LCF_STRUCT_TYPED_FIELD(std::string, wait_off),
	LCF_STRUCT_TYPED_FIELD(std::string, level),
	LCF_STRUCT_TYPED_FIELD(std::string, health_points),
	LCF_STRUCT_TYPED_FIELD(std::string, spirit_points),
	LCF_STRUCT_TYPED_FIELD(std::string, normal_status),
	LCF_STRUCT_TYPED_FIELD(std::string, exp_short),
	LCF_STRUCT_TYPED_FIELD(std::string, lvl_short),
	LCF_STRUCT_TYPED_FIELD(std::string, hp_short),
	LCF_STRUCT_TYPED_FIELD(std::string, sp_short),
	LCF_STRUCT_TYPED_FIELD(std::string, sp_cost),
	LCF_STRUCT_TYPED_FIELD(std::string, attack),
	LCF_STRUCT_TYPED_FIELD(std::string, defense),
	LCF_STRUCT_TYPED_FIELD(std::string, spirit),
	LCF_STRUCT_TYPED_FIELD(std::string, agility),
	LCF_STRUCT_TYPED_FIELD(std::string, weapon),
	LCF_STRUCT_TYPED_FIELD(std::string, shield),
	LCF_STRUCT_TYPED_FIELD(std::string, armor),
	LCF_STRUCT_TYPED_FIELD(std::string, helmet),
	LCF_STRUCT_TYPED_FIELD(std::string, accessory),
	LCF_STRUCT_TYPED_FIELD(std::string, save_game_message),
	LCF_STRUCT_TYPED_FIELD(std::string, load_game_message),
	LCF_STRUCT_TYPED_FIELD(std::string, file),
	LCF_STRUCT_TYPED_FIELD(std::string, exit_game_message),
	LCF_STRUCT_TYPED_FIELD(std::string, yes),
	LCF_STRUCT_TYPED_FIELD(std::string, no),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
