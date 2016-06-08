#include "ItemMapLocationPath.h"

ItemMapLocationPath::ItemMapLocationPath(short itemId) : Item("MapLocationPath", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("map_location_path", 0);
	setMaxStackSize(1);
}