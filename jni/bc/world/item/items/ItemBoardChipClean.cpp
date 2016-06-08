#include "ItemBoardChipClean.h"

ItemBoardChipClean::ItemBoardChipClean(short itemId) : Item("BoardChipClean", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_chip_clean", 0);
	setMaxStackSize(64);
}