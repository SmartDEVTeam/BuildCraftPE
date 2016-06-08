#include "ItemBlueprintClean.h"

ItemBlueprintClean::ItemBlueprintClean(short itemId) : Item("BlueprintClean", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("blueprint_clean", 0);
	setMaxStackSize(64);
}