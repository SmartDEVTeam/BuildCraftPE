#include "ItemWrench.h"

#include "mcpe/world/item/ItemInstance.h"

ItemWrench::ItemWrench(const std::string& name, short itemId) : Item(name, itemId - 0x100)
{
	creativeCategory = 4;
	setIcon("wrench", 0);
	Item::mItems[itemId] = this;
}

bool ItemWrench::useOn(ItemInstance* item, Player* player, int x, int y, int z, signed char side, float xx, float yy, float zz){
	//TODO
} 