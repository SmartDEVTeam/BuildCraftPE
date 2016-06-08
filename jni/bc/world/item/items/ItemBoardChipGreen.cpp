#include "ItemBoardChipGreen.h"

ItemBoardChipGreen::ItemBoardChipGreen(short itemId) : Item("BoardChipGreen", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_chip_green", 0);
	setMaxStackSize(1);
}