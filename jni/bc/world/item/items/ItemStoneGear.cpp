#include "ItemStoneGear.h"

ItemStoneGear::ItemStoneGear(short itemId) : Item("StoneGear", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("gear", 1);
	setMaxStackSize(64);
}