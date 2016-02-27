#include "Items.h"

#include "mcpe/world/item/Item.h"

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
	itemWoodenGear = new ItemWoodenGear("itemWoodenGear", 500);
	itemStoneGear = new ItemStoneGear("itemStoneGear", 501);
	itemIronGear = new ItemIronGear("itemIronGear", 502);
	itemGoldGear = new ItemGoldGear("itemGoldGear", 503);
	itemDiamondGear = new ItemDiamondGear("itemDiamondGear", 504);
	itemWrench = new ItemWrench("itemWrench",505);
	itemDebugger = new ItemDebugger("itemDebugger",506);
	itemPaintbrushBlack = new ItemPaintbrush("itemPaintbrushBlack",507,0);
	itemPaintbrushBlue = new ItemPaintbrush("itemPaintbrushBlue",508,1);
	itemPaintbrushBrown = new ItemPaintbrush("itemPaintbrushBrown",509,2);
	itemPaintbrushClean = new ItemPaintbrush("itemPaintbrushClean",510,3);
	itemPaintbrushCyan = new ItemPaintbrush("itemPaintbrushCyan",511,4);
	itemPaintbrushGray = new ItemPaintbrush("itemPaintbrushGray",512,5);
	itemPaintbrushGreen = new ItemPaintbrush("itemPaintbrushGreen",513,6);
	itemPaintbrushLightBlue = new ItemPaintbrush("itemPaintbrushLightBlue",514,7);
	itemPaintbrushLightGray = new ItemPaintbrush("itemPaintbrushLightGray",515,8);
	itemPaintbrushLime = new ItemPaintbrush("itemPaintbrushLime",516,9);
	itemPaintbrushMagenta = new ItemPaintbrush("itemPaintbrushMagenta",517,10);
	itemPaintbrushOrange = new ItemPaintbrush("itemPaintbrushOrange",518,11);
	itemPaintbrushPink = new ItemPaintbrush("itemPaintbrushPink",519,12);
	itemPaintbrushPurple = new ItemPaintbrush("itemPaintbrushPurple",520,13);
	itemPaintbrushRed = new ItemPaintbrush("itemPaintbrushRed",521,14);
	itemPaintbrushSilver = new ItemPaintbrush("itemPaintbrushSilver",522,15);
	itemPaintbrushWhite = new ItemPaintbrush("itemPaintbrushWhite",523,16);
	itemPaintbrushYellow = new ItemPaintbrush("itemPaintbrushYellow",524,17);
	
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
