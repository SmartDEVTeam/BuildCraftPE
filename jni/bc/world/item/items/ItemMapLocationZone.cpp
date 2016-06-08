#include "ItemMapLocationZone.h"

ItemMapLocationZone::ItemMapLocationZone(short itemId) : Item("MapLocationZone", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("map_location_zone", 0);
	setMaxStackSize(1);
}