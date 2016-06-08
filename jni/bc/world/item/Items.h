#pragma once

#include "com/mojang/minecraftpe/world/item/Item.h"

class Items {
public:
	//BC Builders
	static Item* itemBlueprintClean;
	static Item* itemBlueprintUsed;
	static Item* itemTemplateClean;
	static Item* itemTemplateUsed;
	
	//BC Core
	static Item* itemDebugger;
	static Item* itemWoodenGear;
	static Item* itemStoneGear;
	static Item* itemIronGear;
	static Item* itemGoldGear;
	static Item* itemDiamondGear;
	static Item* itemWrench;
	static Item* itemPaintbrushBlack;
	static Item* itemPaintbrushBlue;
	static Item* itemPaintbrushBrown;
	static Item* itemPaintbrushClean;
	static Item* itemPaintbrushCyan;
	static Item* itemPaintbrushGray;
	static Item* itemPaintbrushGreen;
	static Item* itemPaintbrushLightBlue;
	static Item* itemPaintbrushLightGray;
	static Item* itemPaintbrushLime;
	static Item* itemPaintbrushMagenta;
	static Item* itemPaintbrushOrange;
	static Item* itemPaintbrushPink;
	static Item* itemPaintbrushPurple;
	static Item* itemPaintbrushRed;
	static Item* itemPaintbrushSilver;
	static Item* itemPaintbrushWhite;
	static Item* itemPaintbrushYellow;
	static Item* itemMapLocationArea;
	static Item* itemMapLocationClean;
	static Item* itemMapLocationPath;
	static Item* itemMapLocationSpot;
	static Item* itemMapLocationZone;
	static Item* itemListClean;
	static Item* itemListUsed;
	
	//BC Energy
	static Item* itemBucketFuel;
	static Item* itemBucketOil;
	static Item* itemBucketRedplasma;
	
	//BC Robotics
	static Item* itemBoardChipBlue;
	static Item* itemBoardChipClean;
	static Item* itemBoardChipGreen;
	static Item* itemBoardChipRed;
	static Item* itemBoardChipYellow;
	static Item* itemBoardMapBlue;
	static Item* itemBoardMapClean;
	static Item* itemBoardMapGreen;
	static Item* itemBoardMapRed;
	static Item* itemBoardMapUnknown;
	static Item* itemBoardMapYellow;
	
	static void initItems();
	static void initCreativeItems();
};