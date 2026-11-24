typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DA908;
extern M2C_UNK D_800DE5D0;

void func_8007AA78(void *arg0) {
    void *temp_s0;

    temp_s0 = *((__typeof__(D_800DE5D0) *)((char *)(__typeof__(D_800DE5D0) *)((char *)&D_800DE5D0 + (M2C_FIELD(arg0, u8 *, 2) * 4))));
    func_8002E3A0(M2C_FIELD(temp_s0, s32 *, 0x6DC), func_800D0890(1, M2C_FIELD(arg0, u8 *, 1)) & 0xFF);
    func_8002E3A0(M2C_FIELD(temp_s0, s32 *, 0x6D8), func_800D0890(1, M2C_FIELD(arg0, u8 *, 1)) & 0xFF);
    if (*((__typeof__(D_800DA908) *)((char *)(__typeof__(D_800DA908) *)((char *)&D_800DA908 + (M2C_FIELD(arg0, u8 *, 2) * 4)))) != 0) {
        func_8002E3A0(*((__typeof__(D_800DA908) *)((char *)(__typeof__(D_800DA908) *)((char *)&D_800DA908 + (M2C_FIELD(arg0, u8 *, 2) * 4)))), func_800D0B04(0, M2C_FIELD(arg0, u8 *, 1)) & 0xFF);
    }
}
