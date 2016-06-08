#include "ItemBoardMapClean.h"

ItemBoardMapClean::ItemBoardMapClean(short itemId) : Item("BoardMapClean", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_map_clean", 0);
	setMaxStackSize(64);
}