typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DA718;
extern M2C_UNK D_800DA748;

void func_800785B4(u8 *arg0, M2C_UNK arg1) {
    func_8002E260((__typeof__(D_800DA718) *)((char *)(__typeof__(D_800DA718) *)((char *)&D_800DA718 + (*arg0 * 0xC))));
    func_8002E23C((__typeof__(D_800DA748) *)((char *)(__typeof__(D_800DA748) *)((char *)&D_800DA748 + (*arg0 * 0xC))), arg1);
    func_80078240(arg0, arg1);
}
