#include "ItemGoldGear.h"

#include "mcpe/world/item/ItemInstance.h"

ItemGoldGear::ItemGoldGear(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("gear", 3);
	Item::mItems[itemId] = this;
}