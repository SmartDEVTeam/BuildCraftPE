#include "ItemBoardChipYellow.h"

ItemBoardChipYellow::ItemBoardChipYellow(short itemId) : Item("BoardChipYellow", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("board_chip_yellow", 0);
	setMaxStackSize(1);
}