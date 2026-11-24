typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800E1CF4;

s32 func_800C2290(void) {
    func_80027820();
    if (D_800E1CF4 != 0) {
        func_80027300(D_800E1CF4);
        D_800E1CF4 = 0;
    }
    return 1;
}
