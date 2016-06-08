#include "ItemMapLocationArea.h"

ItemMapLocationArea::ItemMapLocationArea(short itemId) : Item("MapLocationArea", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("map_location_area", 0);
	setMaxStackSize(1);
}