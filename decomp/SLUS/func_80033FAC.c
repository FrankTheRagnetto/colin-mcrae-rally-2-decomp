typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80049EBC;
extern s8 D_80049EC0;
extern s8 D_80049EC1;
extern s32 D_80049EC4;
extern s32 D_80049EC8;

void func_80033FAC(void) {
    if (D_80049EBC != 0) {
        func_80027300(D_80049EBC);
        D_80049EC0 = 0;
        D_80049EC4 = 0;
        D_80049EC1 = 0;
        D_80049EBC = 0;
        D_80049EC8 = 0;
    }
}
