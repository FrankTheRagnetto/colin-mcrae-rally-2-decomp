typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80078D08;
extern M2C_UNK D_8009D28C;
extern M2C_UNK D_8009DB9C;
extern M2C_UNK D_8009DD6C;
extern M2C_UNK D_8009DF3C;
extern M2C_UNK D_8009E10C;
extern M2C_UNK D_8009E2DC;
extern M2C_UNK D_8009E4AC;
extern M2C_UNK func_800861C0;

void func_80086DB8(void) {
    func_80046734(&D_8009DB9C, 0, 0x16, 0, &D_8009D28C, 0, 1, 0, 1);
    func_80046D4C(&D_8009DB9C, 0, 0x14B, &D_8009DD6C, 0, -1);
    func_80046D4C(&D_8009DB9C, 0, 0x14C, &D_8009DF3C, 0, -1);
    func_80046D4C(&D_8009DB9C, 0, 0x14D, &D_8009E10C, 0, -1);
    func_80046D4C(&D_8009DB9C, 0, 0x14E, &D_8009E2DC, 0, -1);
    func_80046D4C(&D_8009DB9C, 0, 0x14F, &D_8009E4AC, 0, -1);
    func_800470E4(&D_8009DB9C, &func_800861C0 + 0x10, 0, &D_80078D08, 0);
    func_800470FC(&D_8009DB9C, 0);
}
