typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_80090EF8;
extern s8 D_80090EF9;
extern s8 D_80090EFA;

void func_80066548(s8 arg0, s8 arg1, s8 arg2) {
    s32 temp_a0;

    temp_a0 = func_80024694();
    D_80090EF8 = arg0;
    D_80090EF9 = arg1;
    D_80090EFA = arg2;
    func_8003440C(temp_a0, 0, 0, 2);
    func_80024FAC();
    func_80024FAC();
    func_80025350(0);
}
