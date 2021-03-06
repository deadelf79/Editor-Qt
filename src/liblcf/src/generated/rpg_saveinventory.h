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

#ifndef LCF_RPG_SAVEINVENTORY_H
#define LCF_RPG_SAVEINVENTORY_H

// Headers
#include <vector>
#include "../reader_types.h"

/**
 * RPG::SaveInventory class.
 */
namespace RPG {
	class SaveInventory {
	public:
		void Setup();
		int party_size = -1;
		std::vector<int16_t> party;
		int items_size = -1;
		std::vector<int16_t> item_ids;
		std::vector<uint8_t> item_counts;
		std::vector<uint8_t> item_usage;
		int gold = 0;
		int timer1_secs = 0;
		bool timer1_active = false;
		bool timer1_visible = false;
		bool timer1_battle = false;
		int timer2_secs = 0;
		bool timer2_active = false;
		bool timer2_visible = false;
		bool timer2_battle = false;
		int battles = 0;
		int defeats = 0;
		int escapes = 0;
		int victories = 0;
		int turns = 0;
		int steps = 0;
	};
}

#endif
