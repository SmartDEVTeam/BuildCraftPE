#include "ItemBucketFuel.h"

ItemBucketFuel::ItemBucketFuel(short itemId) : Item("BucketFuel", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("bucket_fuel", 0);
	setMaxStackSize(1);
}