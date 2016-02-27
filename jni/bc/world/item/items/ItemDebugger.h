#pragma once

#include "mcpe/world/item/Item.h"

class ItemDebugger : public Item
{
public:
    ItemDebugger(const std::string&, short);
	virtual bool useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
};