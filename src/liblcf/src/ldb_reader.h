/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LDB_READER_H
#define LCF_LDB_READER_H

#include <string>
#include <vector>
#include "generated/rpg_actor.h"
#include "generated/rpg_skill.h"
#include "generated/rpg_item.h"
#include "generated/rpg_enemy.h"
#include "generated/rpg_troop.h"
#include "generated/rpg_attribute.h"
#include "generated/rpg_state.h"
#include "generated/rpg_terrain.h"
#include "generated/rpg_chipset.h"
#include "generated/rpg_animation.h"
#include "generated/rpg_terms.h"
#include "generated/rpg_system.h"
#include "generated/rpg_commonevent.h"
#include "generated/rpg_music.h"
#include "generated/rpg_sound.h"
#include "generated/rpg_class.h"
#include "generated/rpg_battlecommand.h"
#include "generated/rpg_battleranimation.h"
#include "generated/rpg_battleranimationdata.h"
#include "generated/rpg_itemanimation.h"
#include "generated/rpg_parameters.h"
#include "generated/rpg_equipment.h"
#include "generated/rpg_database.h"

/**
 * LDB Reader namespace.
 */
namespace LDB_Reader {

	/**
	 * Loads Database.
	 */
	bool Load(const std::string& filename, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(const std::string& filename, const std::string& encoding);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(const std::string& filename);

	/**
	 * Load Database as XML.
	 */
	bool LoadXml(const std::string& filename);

	/**
	 * Loads Database.
	 */
	bool Load(std::istream& filestream, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(std::ostream& filestream, const std::string& encoding);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(std::ostream& filestream);

	/**
	 * Load Database as XML.
	 */
	bool LoadXml(std::istream& filestream);
}

#endif
