#include "ItemPaintbrush.h"

#include "mcpe/world/item/ItemInstance.h"

ItemPaintbrush::ItemPaintbrush(const std::string& name, short itemId, int type) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("debugger", type);
	Item::mItems[itemId] = this;
}