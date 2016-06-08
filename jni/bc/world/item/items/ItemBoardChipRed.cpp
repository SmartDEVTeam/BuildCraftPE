#include "ItemBoardChipRed.h"

ItemBoardChipRed::ItemBoardChipRed(short itemId) : Item("BoardChipRed", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_chip_red", 0);
	setMaxStackSize(1);
}