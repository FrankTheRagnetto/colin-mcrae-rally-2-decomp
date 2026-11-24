typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_800D8D9C;
extern s32 D_800E3D30;
extern s32 D_800E4224;
extern s32 D_800E422C;

s32 func_800D69A8(void) {
    if (D_800E422C != 0) {
        func_80027300(D_800E422C);
    }
    if (D_800E3D30 != 0) {
        func_80027300(D_800E3D30);
    }
    if (D_800E4224 != 0) {
        func_80027300(D_800E4224);
    }
    D_800D8D9C = 0;
    return 1;
}
