#ifndef CEN_H
#define CEN_H

#include "common.h"
#include "stage.h"

extern PfnEntityUpdate D_80180390[];
extern u16 D_80180410[];
extern u16 D_80180458;
extern u16 D_801805D8[];
extern s16 D_80180BBC[];
extern ObjInit2 D_8018125C[];
void CreateEntityFromCurrentEntity(u16 objectId, Entity* entity);
extern LayoutObject* D_8019C764;
extern LayoutObject* D_8019C768;
extern s16 D_8019D3B4;
extern s16 D_8019D3B6;
extern s32 D_8019D3B8;
extern s16 D_8019D37E;
extern u16 D_8019D380;
extern s16 D_8019D382;
extern s16 D_8019D384;
extern s16 D_8019D386;
extern s16 D_8019D38A;
extern s8 D_8019D38E;
extern s8 D_8019D38F;
void func_80192A3C(Entity*, LayoutObject*);
#endif