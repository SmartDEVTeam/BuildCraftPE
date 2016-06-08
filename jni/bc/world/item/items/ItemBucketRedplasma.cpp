#include "ItemBucketRedplasma.h"

ItemBucketRedplasma::ItemBucketRedplasma(short itemId) : Item("BucketRedplasma", itemID - 0x100) {
	Item::mItems[itemId] = this;
	creativeCategory = CreativeCategory::ITEMS;
	setIcon("bucket_redplasma", 0);
	setMaxStackSize(1);
}