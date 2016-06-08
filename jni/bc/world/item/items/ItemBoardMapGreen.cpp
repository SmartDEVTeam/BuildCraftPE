#include "ItemBoardMapGreen.h"

ItemBoardMapGreen::ItemBoardMapGreen(short itemId) : Item("BoardMapGreen", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_map_green", 0);
	setMaxStackSize(1);
}