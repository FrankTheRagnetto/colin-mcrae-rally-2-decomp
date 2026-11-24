typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8009D45C;
extern M2C_UNK D_8009D7FC;
extern M2C_UNK func_8007F9C8;
extern M2C_UNK func_800852D0;

void func_800895D8(void) {
    func_80046734(&D_8009D7FC, 0, 0x8E, 0, &D_8009D45C, 0, 1, 0, 1);
    func_800470E4(&D_8009D7FC, &func_800852D0 + 0x34, 0, &func_8007F9C8 + 0x48, 0);
    func_800470FC(&D_8009D7FC, 0);
}
