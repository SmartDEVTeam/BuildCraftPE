#include "ItemStoneGear.h"

#include "mcpe/world/item/ItemInstance.h"

ItemStoneGear::ItemStoneGear(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("gear", 1);
	Item::mItems[itemId] = this;
}