#pragma once

class Item;

class Items {
public:
	static Item* itemWoodenGear;
	static Item* itemStoneGear;
	static Item* itemIronGear;
	static Item* itemGoldGear;
	static Item* itemDiamondGear;
	static Item* itemWrench;
	
	static void initItems();
	static void initCreativeItems();
};