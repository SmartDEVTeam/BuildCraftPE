#include "ItemBoardMapRed.h"

ItemBoardMapRed::ItemBoardMapRed(short itemId) : Item("BoardMapRed", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_map_red", 0);
	setMaxStackSize(1);
}