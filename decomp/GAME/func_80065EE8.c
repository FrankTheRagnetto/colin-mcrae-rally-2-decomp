typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80061FCC;
extern M2C_UNK D_80066D10;
extern M2C_UNK D_80066D84;
extern M2C_UNK D_8006721C;
extern M2C_UNK D_800D91AC;
extern M2C_UNK D_800D9E5C;

void func_80065EE8(void) {
    func_80046734(&D_800D9E5C, 0, 0, 0, &D_800D91AC, 0, 1, 0, 1);
    func_80046B24(&D_800D9E5C, 0, 0xF, &D_80066D10, 3);
    if ((func_8001CAE0() & 0xFF) != 2) {
        if ((func_8001CAE0() & 0xFF) == 3) {
            goto block_3;
        }
    } else {
block_3:
        func_80046B24(&D_800D9E5C, 0, 0x8B, &D_80066D84, 4);
    }
    func_80046C38(&D_800D9E5C, 0, 0xA6, 0, -1);
    func_800470E4(&D_800D9E5C, &D_8006721C, 0, &D_80061FCC, 0);
    func_800470FC(&D_800D9E5C, 0);
}
