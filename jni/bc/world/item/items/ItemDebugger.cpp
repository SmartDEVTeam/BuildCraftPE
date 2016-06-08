#include "ItemDebugger.h"

ItemDebugger::ItemDebugger(short itemId) : Item("debugger", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("debugger", 0);
	setMaxStackSize(64);
}