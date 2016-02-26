#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <Substrate.h>

#include "mcpe/world/item/Item.h"
#include "mcpe/world/level/block/Block.h"
//#include "mcpe/world/item/recipes/Recipe.h"

#include "bc/world/item/Items.h"
//#include "bc/block/Blocks.h"
//#include "bc/recipes/Recipes.h"

#define LOG_TAG "BuildCraftPE"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))

static void (*_Item$initCreativeItems)();
static void Item$initCreativeItems() {
	_Item$initCreativeItems();
	
	Items::initItems();
}

/*static void (*_Block$initBlocks)();
static void Block$initBlocks() {
	_Block$initBlocks();
	
	Blocks::initBlocks();
}*/

/*static void (*_Recipes$init)();
static void Recipes$init(){
	_Recipes$init();
	
	InitRecipes::loadRecipes();
}*/

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	MSHookFunction((void*) &Item::initCreativeItems, (void*) &Item$initCreativeItems, (void**) &_Item$initCreativeItems);
	//MSHookFunction((void*) &Block::initBlocks, (void*) &Block$initBlocks, (void**) &_Block$initBlocks);
	//MSHookFunction((void*) &Recipes::init, (void*) &Recipes$init, (void**) &_Recipes$init);
	return JNI_VERSION_1_2;
}
