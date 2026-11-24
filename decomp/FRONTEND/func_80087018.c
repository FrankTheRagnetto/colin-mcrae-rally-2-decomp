typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007A4DC;
extern M2C_UNK D_80085BA0;
extern M2C_UNK D_80086208;
extern M2C_UNK D_8009DB9C;
extern M2C_UNK D_8009DF3C;
extern M2C_UNK func_800859A4;

void func_80087018(void) {
    func_80046734(&D_8009DF3C, 0, 0x14C, 0, &D_8009DB9C, 0, 1, 0, 0);
    func_80046B24(&D_8009DF3C, 0, 0x27, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x28, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x29, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x2A, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x2B, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x2C, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x2D, &D_80086208, -1);
    func_80046B24(&D_8009DF3C, 0, 0x2E, &D_80086208, -1);
    func_800470E4(&D_8009DF3C, &func_800859A4 + 0xF8, &D_80085BA0, &D_8007A4DC, 0);
    func_800470FC(&D_8009DF3C, 0);
}
