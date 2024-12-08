// SPDX-License-Identifier: AGPL-3.0-or-later
#include "st0.h"

extern ObjInit OVL_EXPORT(BackgroundBlockInit)[];
extern u16 g_EInitCommon[];
// void func_801A7D64(Entity* self) {
void OVL_EXPORT(EntityBackgroundBlock)(Entity* self) {
    ObjInit* obj = &OVL_EXPORT(BackgroundBlockInit)[self->params];
    if (!self->step) {
        InitializeEntity(g_EInitCommon);
        self->animSet = obj->animSet;
        self->zPriority = obj->zPriority;
        self->unk5A = obj->unk5A;
        self->palette = obj->palette;
        self->drawFlags = obj->drawFlags;
        self->drawMode = obj->drawMode;
        if (obj->unkC != 0) {
            self->flags = obj->unkC;
        }
    }
    AnimateEntity(obj->animFrames, self);
}