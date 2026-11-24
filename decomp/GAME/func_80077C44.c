typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DA690;

void func_80077C44(void *arg0, void *arg1) {
    func_800D0890(1, M2C_FIELD(arg0, u8 *, 1));
    func_800774EC(M2C_FIELD(arg1, u8 *, 2), M2C_FIELD(arg1, u8 *, 1), 0, 1);
    *((__typeof__(D_800DA690) *)((char *)(__typeof__(D_800DA690) *)((char *)&D_800DA690 + (M2C_FIELD(arg0, u8 *, 0) * 4)))) = 0x10000;
}
