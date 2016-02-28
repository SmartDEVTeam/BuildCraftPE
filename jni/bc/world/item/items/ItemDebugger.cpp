#include "ItemDebugger.h"

#include "mcpe/world/item/ItemInstance.h"

ItemDebugger::ItemDebugger(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("debugger", 0);
	Item::mItems[itemId] = this;
}