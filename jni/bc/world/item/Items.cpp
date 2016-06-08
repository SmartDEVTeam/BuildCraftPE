#include "Items.h"

#include "com/mojang/minecraftpe/world/item/Item.h"

#include "items/ItemBlueprintClean.h"
#include "items/ItemBlueprintUsed.h"
#include "items/ItemTemplateClean.h"
#include "items/ItemTemplateUsed.h"

#include "items/ItemWoodenGear.h"
#include "items/ItemStoneGear.h"
#include "items/ItemIronGear.h"
#include "items/ItemGoldGear.h"
#include "items/ItemDiamondGear.h"
#include "items/ItemWrench.h"
#include "items/ItemDebugger.h"
#include "items/ItemPaintbrush.h"
#include "items/ItemMapLocationArea.h"
#include "items/ItemMapLocationClean.h"
#include "items/ItemMapLocationPath.h"
#include "items/ItemMapLocationSpot.h"
#include "items/ItemMapLocationZone.h"
#include "items/ItemListClean.h"
#include "items/ItemListUsed.h"

#include "items/ItemBucketFuel.h"
#include "items/ItemBucketOil.h"
#include "items/ItemBucketRedplasma.h"

#include "items/ItemBoardChipBlue.h"
#include "items/ItemBoardChipClean.h"
#include "items/ItemBoardChipGreen.h"
#include "items/ItemBoardChipRed.h"
#include "items/ItemBoardChipYellow.h"
#include "items/ItemBoardMapBlue.h"
#include "items/ItemBoardMapClean.h"
#include "items/ItemBoardChipGreen.h"
#include "items/ItemBoardMapRed.h"
#include "items/ItemBoardMapUnknown.h"
#include "items/ItemBoardMapYellow.h"

//BC Builders
Item* Items::itemBlueprintClean;
Item* Items::itemBlueprintUsed;
Item* Items::itemTemplateClean;
Item* Items::itemTemplateUsed;

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

Item* Items::itemMapLocationArea;
Item* Items::itemMapLocationClean;
Item* Items::itemMapLocationPath;
Item* Items::itemMapLocationSpot;
Item* Items::itemMapLocationZone;
Item* Items::itemListClean;
Item* Items::itemListUsed;

//BC Energy
Item* Items::itemBucketFuel;
Item* Items::itemBucketOil;
Item* Items::itemBucketRedplasma;

//BC Robotics
Item* Items::itemBoardChipBlue;
Item* Items::itemBoardChipClean;
Item* Items::itemBoardChipGreen;
Item* Items::itemBoardChipRed;
Item* Items::itemBoardChipYellow;
Item* Items::itemBoardMapBlue;
Item* Items::itemBoardMapClean;
Item* Items::itemBoardMapGreen;
Item* Items::itemBoardMapRed;
Item* Items::itemBoardMapUnknown;
Item* Items::itemBoardMapYellow;

void Items::initItems() {
	//BC Builders
	itemBlueprintClean = new ItemBlueprintClean(500);
	itemBlueprintUsed = new ItemBlueprintUsed(501);
	itemTemplateClean = new ItemTemplateClean(502);
	itemTemplateUsed = new ItemTemplateUsed(503);
	
	//BC Core
	itemWoodenGear = new ItemWoodenGear(504);
	itemStoneGear = new ItemStoneGear(505);
	itemIronGear = new ItemIronGear(506);
	itemGoldGear = new ItemGoldGear(507);
	itemDiamondGear = new ItemDiamondGear(508);
	itemWrench = new ItemWrench(509);
	itemDebugger = new ItemDebugger(510);
	itemPaintbrushBlack = new ItemPaintbrush(511,0);
	itemPaintbrushBlue = new ItemPaintbrush(512,1);
	itemPaintbrushBrown = new ItemPaintbrush(513,2);
	itemPaintbrushClean = new ItemPaintbrush(514,3);
	itemPaintbrushCyan = new ItemPaintbrush(515,4);
	itemPaintbrushGray = new ItemPaintbrush(516,5);
	itemPaintbrushGreen = new ItemPaintbrush(517,6);
	itemPaintbrushLightBlue = new ItemPaintbrush(518,7);
	itemPaintbrushLightGray = new ItemPaintbrush(519,8);
	itemPaintbrushLime = new ItemPaintbrush(520,9);
	itemPaintbrushMagenta = new ItemPaintbrush(521,10);
	itemPaintbrushOrange = new ItemPaintbrush(522,11);
	itemPaintbrushPink = new ItemPaintbrush(523,12);
	itemPaintbrushPurple = new ItemPaintbrush(524,13);
	itemPaintbrushRed = new ItemPaintbrush(525,14);
	itemPaintbrushSilver = new ItemPaintbrush(526,15);
	itemPaintbrushWhite = new ItemPaintbrush(527,16);
	itemPaintbrushYellow = new ItemPaintbrush(528,17);
	
	itemMapLocationArea = new ItemMapLocationArea(529);
	itemMapLocationClean = new ItemMapLocationClean(530);
	itemMapLocationPath = new ItemMapLocationPath(531);
	itemMapLocationSpot = new ItemMapLocationSpot(532);
	itemMapLocationZone = new ItemMapLocationZone(533);
	itemListClean = new ItemListClean(534);
	itemListUsed = new ItemListUsed(535);
	
	//BC Energy
	itemBucketFuel = new ItemBucketFuel(536);
	itemBucketOil = new ItemBucketOil(537);
	itemBucketRedplasma = new ItemBucketRedplasma(538);
	
	//BC Robotics
	itemBoardChipBlue = new ItemBoardChipBlue(539);
	itemBoardChipClean = new ItemBoardChipClean(540);
	itemBoardChipGreen = new ItemBoardChipGreen(541);
	itemBoardChipRed = new ItemBoardChipRed(542);
	itemBoardChipYellow = new ItemBoardChipYellow(543);
	itemBoardMapBlue = new ItemBoardMapBlue(544);
	itemBoardMapClean = new ItemBoardMapClean(545);
	itemBoardMapGreen = new ItemBoardMapGreen(546);
	itemBoardMapRed = new ItemBoardMapRed(547);
	itemBoardMapUnknown = new ItemBoardMapUnknown(548);
	itemBoardMapYellow = new ItemBoardMapYellow(549);
	
	initCreativeItems();
}

void Items::initCreativeItems() {
	//BC Builders
	Item::addCreativeItem(itemBlueprintClean, 0);
	Item::addCreativeItem(itemBlueprintUsed, 0);
	Item::addCreativeItem(itemTemplateClean, 0);
	Item::addCreativeItem(itemTemplateUsed, 0);
	
	//BC Core
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
	Item::addCreativeItem(itemMapLocationArea, 0);
	Item::addCreativeItem(itemMapLocationClean, 0);
	Item::addCreativeItem(itemMapLocationPath, 0);
	Item::addCreativeItem(itemMapLocationSpot, 0);
	Item::addCreativeItem(itemMapLocationZone, 0);
	Item::addCreativeItem(itemListClean, 0);
	Item::addCreativeItem(itemListUsed, 0);
	
	//BC Energy
	Item::addCreativeItem(itemBucketFuel, 0);
	Item::addCreativeItem(itemBucketOil, 0);
	Item::addCreativeItem(itemBucketRedplasma, 0);
	
	//BC Robotics
	Item::addCreativeItem(itemBoardChipBlue, 0);
	Item::addCreativeItem(itemBoardChipClean, 0);
	Item::addCreativeItem(itemBoardChipGreen, 0);
	Item::addCreativeItem(itemBoardChipRed, 0);
	Item::addCreativeItem(itemBoardChipYellow, 0);
	Item::addCreativeItem(itemBoardMapBlue, 0);
	Item::addCreativeItem(itemBoardMapClean, 0);
	Item::addCreativeItem(itemBoardMapGreen, 0);
	Item::addCreativeItem(itemBoardMapRed, 0);
	Item::addCreativeItem(itemBoardMapUnknown, 0);
	Item::addCreativeItem(itemBoardMapYellow, 0);
}
