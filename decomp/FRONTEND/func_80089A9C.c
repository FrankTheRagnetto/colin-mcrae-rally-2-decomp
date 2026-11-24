typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80069390;
extern M2C_UNK D_80082D00;
extern M2C_UNK D_80082E44;
extern M2C_UNK D_8009D28C;
extern M2C_UNK D_8009E67C;

void func_80089A9C(void) {
    func_80046734(&D_8009E67C, 0, 0x17, 0, &D_8009D28C, 0, 1, 0, 1);
    func_80046B24(&D_8009E67C, 0, 0x8A, &D_80082D00, -1);
    func_80046B24(&D_8009E67C, 0, 0x8B, &D_80082E44, -1);
    func_800470E4(&D_8009E67C, 0, 0, &D_80069390, 0);
    func_800470FC(&D_8009E67C, 0);
}
