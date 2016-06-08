#include "ItemMapLocationSpot.h"

ItemMapLocationSpot::ItemMapLocationSpot(short itemId) : Item("MapLocationSpot", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("map_location_spot", 0);
	setMaxStackSize(1);
}