#include "ItemBucketOil.h"

ItemBucketOil::ItemBucketOil(short itemId) : Item("BucketOil", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("bucket_oil", 0);
	setMaxStackSize(1);
}