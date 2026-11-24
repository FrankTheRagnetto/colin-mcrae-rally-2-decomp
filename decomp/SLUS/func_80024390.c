typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 func_80024390(u32 arg0) {
    switch (arg0) {
    case 0:
        return 0xC;
    case 1:
        return 8;
    case 2:
        return 6;
    case 3:
        return 4;
    case 4:
        return 2;
    case 5:
        return 1;
    default:
        return 0;
    }
}
