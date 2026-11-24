typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DA36C;

void func_8006E9FC(s32 arg0) {
    *((__typeof__(D_800DA36C) *)((char *)(__typeof__(D_800DA36C) *)((char *)&D_800DA36C + (arg0 * 4)))) = 0;
}
