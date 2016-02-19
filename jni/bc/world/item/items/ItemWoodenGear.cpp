#include "ItemWoodenGear.h"

#include "mcpe/world/item/ItemInstance.h"

ItemWoodenGear::ItemWoodenGear(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("gear", 0);
	Item::mItems[itemId] = this;
}