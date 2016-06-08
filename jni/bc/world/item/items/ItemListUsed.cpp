#include "ItemListUsed.h"

ItemListUsed::ItemListUsed(short itemId) : Item("ListUsed", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("list_used", 0);
	setMaxStackSize(1);
}