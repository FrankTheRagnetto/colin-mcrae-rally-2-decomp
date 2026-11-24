typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D8C98;
extern s8 D_800D8C9C;

s32 func_800CF1A4(void) {
    if (D_800D8C98 != 0) {
        func_80027300(D_800D8C98);
        D_800D8C98 = 0;
    }
    D_800D8C9C = 0;
    return 1;
}
