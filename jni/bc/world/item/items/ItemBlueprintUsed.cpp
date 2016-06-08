#include "ItemBlueprintUsed.h"

ItemBlueprintUsed::ItemBlueprintUsed(short itemId) : Item("BlueprintUsed", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("blueprint_used", 0);
	setMaxStackSize(1);
}