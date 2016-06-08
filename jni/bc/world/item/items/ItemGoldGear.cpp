#include "ItemGoldGear.h"

ItemGoldGear::ItemGoldGear(short itemId) : Item("GoldGear", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("gear", 3);
	setMaxStackSize(64);
}