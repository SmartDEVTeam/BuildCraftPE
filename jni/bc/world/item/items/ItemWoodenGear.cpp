#include "ItemWoodenGear.h"

ItemWoodenGear::ItemWoodenGear(short itemId) : Item("WoodenGear", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("gear", 0);
	setMaxStackSize(64);
}