typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D729C;
extern s32 D_800D72A0;
extern M2C_UNK func_800BD1A0;

void func_800BD134(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 * 0x108;
    temp_v0 = func_80026D20(temp_s0);
    D_800D729C = temp_v0;
    func_80019B00(temp_v0, 0, temp_s0);
    D_800D72A0 = arg0;
    func_8003408C(&func_800BD1A0, 0);
}
