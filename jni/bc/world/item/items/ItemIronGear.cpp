#include "ItemIronGear.h"

#include "mcpe/world/item/ItemInstance.h"

ItemIronGear::ItemIronGear(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("gear", 2);
	Item::mItems[itemId] = this;
}