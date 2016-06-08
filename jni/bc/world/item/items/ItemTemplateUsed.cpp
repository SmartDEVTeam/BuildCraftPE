#include "ItemTemplateUsed.h"

ItemTemplateUsed::ItemTemplateUsed(short itemId) : Item("TemplateUsed", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("template_used", 0);
	setMaxStackSize(1);
}