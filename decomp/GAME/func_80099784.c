typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6F60;

u8 func_80099784(void *arg0, s32 arg1) {
    return M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0xABA) * 0x484) + D_800D6F60 + arg1), u8 *, 0x47B);
}
