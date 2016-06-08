#include "ItemBoardChipBlue.h"

ItemBoardChipBlue::ItemBoardChipBlue(short itemId) : Item("BoardChipBlue", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_chip_blue", 0);
	setMaxStackSize(1);
}