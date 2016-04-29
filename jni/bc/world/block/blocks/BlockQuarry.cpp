#include "BlockQuarry.h"
#include "mcpe/world/material/Material.h"

/*
TODO
=====
-Rotations
-Textures
-Actuall Quarry Functions, (Will add marker usage later).
*/

BlockQuarry::BlockQuarry(int blockId) : Block("blockQuarry", blockId, "iron_block", Material::getMaterial(MaterialType::METAL)){
	creativeCategory = 4;
}