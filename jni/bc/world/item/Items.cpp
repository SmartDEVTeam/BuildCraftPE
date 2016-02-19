#include "Items.h"

#include "mcpe/world/item/Item.h"

#include "items/ItemWoodenGear.h"
#include "items/ItemStoneGear.h"
#include "items/ItemIronGear.h"
#include "items/ItemGoldGear.h"
#include "items/ItemDiamondGear.h"
#include "items/ItemWrench.h"

//BC Core
Item* Items::itemWoodenGear;
Item* Items::itemStoneGear;
Item* Items::itemIronGear;
Item* Items::itemGoldGear;
Item* Items::itemDiamondGear;
Item* Items::itemWrench;

void Items::initItems() {
	itemWoodenGear = new ItemWoodenGear("itemWoodenGear", 500);
	itemStoneGear = new ItemStoneGear("itemStoneGear", 501);
	itemIronGear = new ItemIronGear("itemIronGear", 502);
	itemGoldGear = new ItemGoldGear("itemGoldGear", 503);
	itemDiamondGear = new ItemDiamondGear("itemDiamondGear", 504);
	itemWrench = new ItemWrench("itemWrench",505);
	
	initCreativeItems();
}

void Items::initCreativeItems() {
	Item::addCreativeItem(itemWoodenGear, 0);
	Item::addCreativeItem(itemStoneGear, 0);
	Item::addCreativeItem(itemIronGear, 0);
	Item::addCreativeItem(itemGoldGear, 0);
	Item::addCreativeItem(itemDiamondGear, 0);
	Item::addCreativeItem(itemWrenchGear, 0);
}