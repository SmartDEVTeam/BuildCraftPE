#include "Blocks.h"

#include "mcpe/world/level/block/Block.h"

#include "blocks/BlockQuarry.h"

//Block Ids
int Blocks::_blockQuarryId = 1; //I think i set this up right, maybe.

//BC Builder
Block* Blocks::blockQuarry;

void Blocks::initItems() {
	Block::mBlocks[Blocks::_blockQuarryId] = blockQuarry = (new BlockQuarry(Blocks::_blockQuarryId))->init();
	
	initBlockItems();
}

void Blocks::initBlockItems(){
	Item::mItems[blockQuarry->blockId] = new BlockItem(blockQuarry->getDescriptionId(), blockQuarry->blockId - 0x100);
	
	initCreativeItems();
}

void Blocks::initCreativeItems() {
	Block::addCreativeItem(blockQuarry, 0);
}