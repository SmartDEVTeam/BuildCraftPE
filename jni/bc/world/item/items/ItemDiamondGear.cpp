#include "ItemDiamondGear.h"

ItemDiamondGear::ItemDiamondGear(short itemId) : Item("DiamondGear", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("gear", 4);
	setMaxStackSize(64);
}