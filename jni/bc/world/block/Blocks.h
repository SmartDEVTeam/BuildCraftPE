#pragma once

#include <map>

#include "mcpe/world/level/block/Block.h"
#include "mcpe/world/item/BlockItem.h"
#include "mcpe/world/item/Item.h"

class Blocks {
public:
	static int _blockQuarryId;

public:
	static Block* blockQuarry;

public:
	static void initItems();
	static void initBlockItems();
	static void initCreativeItems();
};