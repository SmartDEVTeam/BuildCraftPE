#include "ItemListClean.h"

ItemListClean::ItemListClean(short itemId) : Item("ListClean", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("list_clean", 0);
	setMaxStackSize(64);
}