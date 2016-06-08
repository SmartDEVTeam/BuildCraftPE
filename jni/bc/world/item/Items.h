#pragma once

#include "com/mojang/minecraftpe/world/item/Item.h"

class Items {
public:
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
	
	static void initItems();
	static void initCreativeItems();
};