#include "ItemIronGear.h"

ItemIronGear::ItemIronGear(short itemId) : Item("IronGear", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("gear", 2);
	setMaxStackSize(64);
}