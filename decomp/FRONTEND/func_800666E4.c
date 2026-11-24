typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK CdMix_v2;
extern M2C_UNK D_800AB398;

void func_800666E4(void) {
    func_80033E84(5, 0x197, &D_800AB398);
    func_8003408C(&CdMix_v2, 0);
}
