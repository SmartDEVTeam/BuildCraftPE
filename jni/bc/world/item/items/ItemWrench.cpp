#include "ItemWrench.h"

ItemWrench::ItemWrench(short itemId) : Item("Wrench", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("wrench", 0);
	setMaxStackSize(1);
}