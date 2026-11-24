typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6F60;

void func_800996BC(u8 *arg0, u8 *arg1, void *arg2) {
    *arg0 = M2C_FIELD(((M2C_FIELD(arg2, s8 *, 0xABA) * 0x484) + D_800D6F60), u8 *, 0x477);
    *arg1 = M2C_FIELD(((M2C_FIELD(arg2, s8 *, 0xABA) * 0x484) + D_800D6F60), u8 *, 0x478);
}
