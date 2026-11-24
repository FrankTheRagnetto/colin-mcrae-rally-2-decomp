typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6EC8;
extern s32 D_800D6EDC;

s32 func_80091FD0(void) {
    if (D_800D6EC8 != 0) {
        func_80027300(D_800D6EC8);
        D_800D6EC8 = 0;
    }
    D_800D6EDC = 0;
    return 1;
}
