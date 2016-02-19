#include "ItemDiamondGear.h"

#include "mcpe/world/item/ItemInstance.h"

ItemDiamondGear::ItemDiamondGear(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("gear", 4);
	Item::mItems[itemId] = this;
}