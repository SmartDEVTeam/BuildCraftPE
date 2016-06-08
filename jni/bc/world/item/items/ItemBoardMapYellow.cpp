#include "ItemBoardMapYellow.h"

ItemBoardMapYellow::ItemBoardMapYellow(short itemId) : Item("BoardMapYellow", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_map_yellow", 0);
	setMaxStackSize(1);
}