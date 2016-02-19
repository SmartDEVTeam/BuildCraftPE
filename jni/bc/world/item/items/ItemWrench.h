#pragma once

#include "mcpe/world/item/Item.h"

class ItemWrench : public Item
{
public:
    ItemWrench(const std::string&, short);
	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
};