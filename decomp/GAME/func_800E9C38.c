typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800DA3DC;
extern M2C_UNK D_800E9358;

void func_800E9C38(s32 arg0) {
    *((__typeof__(D_800E9358) *)((char *)(__typeof__(D_800E9358) *)((char *)&D_800E9358 + (arg0 * 0x88)))) = D_800DA3DC;
}
