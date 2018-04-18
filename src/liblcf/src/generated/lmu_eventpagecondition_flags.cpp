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

/*
 * Headers
 */
#include "../lmu_reader.h"
#include "lmu_chunks.h"
#include "../reader_struct.h"


// Read EventPageCondition.

typedef RPG::EventPageCondition::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("EventPageCondition_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::switch_a, "switch_a"),
	new Flags<flags_type>::Flag(&flags_type::switch_b, "switch_b"),
	new Flags<flags_type>::Flag(&flags_type::variable, "variable"),
	new Flags<flags_type>::Flag(&flags_type::item, "item"),
	new Flags<flags_type>::Flag(&flags_type::actor, "actor"),
	new Flags<flags_type>::Flag(&flags_type::timer, "timer"),
	new Flags<flags_type>::Flag(&flags_type::timer2, "timer2"),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 1;

