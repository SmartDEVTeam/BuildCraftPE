#include "ItemPaintbrush.h"

#include "com/mojang/minecraftpe/world/item/ItemInstance.h"

ItemPaintbrush::ItemPaintbrush(short itemId, int type) : Item("ItemPaintbrush", itemId - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("paintbrush", type);
	setMaxStackSize(64);
}