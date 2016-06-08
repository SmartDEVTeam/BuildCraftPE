#include "ItemBoardMapUnknown.h"

ItemBoardMapUnknown::ItemBoardMapUnknown(short itemId) : Item("BoardMapUnknown", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_map_unknown", 0);
	setMaxStackSize(1);
}