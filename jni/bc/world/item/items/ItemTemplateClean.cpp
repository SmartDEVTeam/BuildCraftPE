#include "ItemTemplateClean.h"

ItemTemplateClean::ItemTemplateClean(short itemId) : Item("TemplateClean", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("template_clean", 0);
	setMaxStackSize(64);
}