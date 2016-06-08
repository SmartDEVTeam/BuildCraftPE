#include "Items.h"

#include "com/mojang/minecraftpe/world/item/Item.h"

#include "items/ItemWoodenGear.h"
#include "items/ItemStoneGear.h"
#include "items/ItemIronGear.h"
#include "items/ItemGoldGear.h"
#include "items/ItemDiamondGear.h"
#include "items/ItemWrench.h"
#include "items/ItemDebugger.h"
#include "items/ItemPaintbrush.h"

//BC Core
Item* Items::itemDebugger;
Item* Items::itemWoodenGear;
Item* Items::itemStoneGear;
Item* Items::itemIronGear;
Item* Items::itemGoldGear;
Item* Items::itemDiamondGear;
Item* Items::itemWrench;
Item* Items::itemPaintbrushBlack;
Item* Items::itemPaintbrushBlue;
Item* Items::itemPaintbrushBrown;
Item* Items::itemPaintbrushClean;
Item* Items::itemPaintbrushCyan;
Item* Items::itemPaintbrushGray;
Item* Items::itemPaintbrushGreen;
Item* Items::itemPaintbrushLightBlue;
Item* Items::itemPaintbrushLightGray;
Item* Items::itemPaintbrushLime;
Item* Items::itemPaintbrushMagenta;
Item* Items::itemPaintbrushOrange;
Item* Items::itemPaintbrushPink;
Item* Items::itemPaintbrushPurple;
Item* Items::itemPaintbrushRed;
Item* Items::itemPaintbrushSilver;
Item* Items::itemPaintbrushWhite;
Item* Items::itemPaintbrushYellow;

void Items::initItems() {
	itemWoodenGear = new ItemWoodenGear(500);
	itemStoneGear = new ItemStoneGear(501);
	itemIronGear = new ItemIronGear(502);
	itemGoldGear = new ItemGoldGear(503);
	itemDiamondGear = new ItemDiamondGear(504);
	itemWrench = new ItemWrench(505);
	itemDebugger = new ItemDebugger(506);
	itemPaintbrushBlack = new ItemPaintbrush(507,0);
	itemPaintbrushBlue = new ItemPaintbrush(508,1);
	itemPaintbrushBrown = new ItemPaintbrush(509,2);
	itemPaintbrushClean = new ItemPaintbrush(510,3);
	itemPaintbrushCyan = new ItemPaintbrush(511,4);
	itemPaintbrushGray = new ItemPaintbrush(512,5);
	itemPaintbrushGreen = new ItemPaintbrush(513,6);
	itemPaintbrushLightBlue = new ItemPaintbrush(514,7);
	itemPaintbrushLightGray = new ItemPaintbrush(515,8);
	itemPaintbrushLime = new ItemPaintbrush(516,9);
	itemPaintbrushMagenta = new ItemPaintbrush(517,10);
	itemPaintbrushOrange = new ItemPaintbrush(518,11);
	itemPaintbrushPink = new ItemPaintbrush(519,12);
	itemPaintbrushPurple = new ItemPaintbrush(520,13);
	itemPaintbrushRed = new ItemPaintbrush(521,14);
	itemPaintbrushSilver = new ItemPaintbrush(522,15);
	itemPaintbrushWhite = new ItemPaintbrush(523,16);
	itemPaintbrushYellow = new ItemPaintbrush(524,17);
	
	initCreativeItems();
}

void Items::initCreativeItems() {
	Item::addCreativeItem(itemWoodenGear, 0);
	Item::addCreativeItem(itemStoneGear, 0);
	Item::addCreativeItem(itemIronGear, 0);
	Item::addCreativeItem(itemGoldGear, 0);
	Item::addCreativeItem(itemDiamondGear, 0);
	Item::addCreativeItem(itemWrench, 0);
	Item::addCreativeItem(itemDebugger, 0);
	Item::addCreativeItem(itemPaintbrushBlack, 0);
	Item::addCreativeItem(itemPaintbrushBlue, 0);
	Item::addCreativeItem(itemPaintbrushBrown, 0);
	Item::addCreativeItem(itemPaintbrushClean, 0);
	Item::addCreativeItem(itemPaintbrushCyan, 0);
	Item::addCreativeItem(itemPaintbrushGray, 0);
	Item::addCreativeItem(itemPaintbrushGreen, 0);
	Item::addCreativeItem(itemPaintbrushLightBlue, 0);
	Item::addCreativeItem(itemPaintbrushLightGray, 0);
	Item::addCreativeItem(itemPaintbrushLime, 0);
	Item::addCreativeItem(itemPaintbrushMagenta, 0);
	Item::addCreativeItem(itemPaintbrushOrange, 0);
	Item::addCreativeItem(itemPaintbrushPink, 0);
	Item::addCreativeItem(itemPaintbrushPurple, 0);
	Item::addCreativeItem(itemPaintbrushRed, 0);
	Item::addCreativeItem(itemPaintbrushSilver, 0);
	Item::addCreativeItem(itemPaintbrushWhite, 0);
	Item::addCreativeItem(itemPaintbrushYellow, 0);
}
