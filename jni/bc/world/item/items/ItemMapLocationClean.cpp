#include "ItemMapLocationClean.h"

ItemMapLocationClean::ItemMapLocationClean(short itemId) : Item("MapLocationClean", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("map_location_clean", 0);
	setMaxStackSize(64);
}