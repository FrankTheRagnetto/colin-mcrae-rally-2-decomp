typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80077CAC;
extern s32 D_80077CB0;

void func_8006F638(void) {
    func_800472A0();
    func_8006F26C();
    func_8006F49C();
    func_8006F550();
    D_80077CAC = 0;
    D_80077CB0 = func_8006F5FC();
}
