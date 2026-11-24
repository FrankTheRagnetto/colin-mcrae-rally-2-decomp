typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 func_800999CC(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    s32 var_a3;

    var_a3 = 0;
    if (!(arg1 & 0xFF) || (arg2 == 6)) {
        temp_v0 = arg0 - 1;
        switch (temp_v0) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 15:
        case 23:
        case 24:
        case 26:
        case 27:
            var_a3 = 1;
            break;
        }
    }
    return var_a3;
}
