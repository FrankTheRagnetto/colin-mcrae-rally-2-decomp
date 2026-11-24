typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80054B6C;
extern M2C_UNK D_8005B030;
extern s8 D_800D6BC2;
extern s32 D_800DA320;

void func_8006DF70(void) {
    func_800264A0(&D_80054B6C, &D_8005B030, func_800CF1F4());
    D_800DA320 = func_800B99C8(&D_80054B6C);
    D_800D6BC2 = 1;
}
