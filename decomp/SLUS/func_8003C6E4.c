typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8004B324;
extern s32 D_8004B328;
extern s32 D_8004B32C;

void func_8003C6E4(s32 arg0) {
    D_8004B324 = arg0;
    if ((arg0 + D_8004B328) > 0x10000) {
        D_8004B32C = 0x10000 - arg0;
    }
}
