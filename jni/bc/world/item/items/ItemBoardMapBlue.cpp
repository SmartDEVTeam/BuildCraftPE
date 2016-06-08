#include "ItemBoardMapBlue.h"

ItemBoardMapBlue::ItemBoardMapBlue(short itemId) : Item("BoardMapBlue", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_map_blue", 0);
	setMaxStackSize(1);
}