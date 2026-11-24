typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800DEACC;
extern s32 D_800DEAD0;
extern s32 D_800DEAD4;
extern s32 D_800DEAD8;
extern s32 D_800DEADC;
extern s32 D_800DEAE0;
extern s32 D_800DEAE4;
extern s32 D_800DEAE8;
extern s32 D_800DEAEC;
extern s32 D_800DEAF0;
extern s32 D_800DEAF8;
extern s32 D_800DEAFC;

s32 func_800A4D48(void) {
    if (D_800DEACC != 0) {
        func_80027300(D_800DEACC);
        D_800DEACC = 0;
    }
    if (D_800DEAE4 != 0) {
        func_80027300(D_800DEAE4);
        D_800DEAE4 = 0;
    }
    if (D_800DEAFC != 0) {
        func_80027300(D_800DEAFC);
        D_800DEAFC = 0;
    }
    if (D_800DEADC != 0) {
        func_80027300(D_800DEADC);
        D_800DEADC = 0;
    }
    if (D_800DEAF8 != 0) {
        func_80027300(D_800DEAF8);
        D_800DEAF8 = 0;
    }
    if (D_800DEAD8 != 0) {
        func_80027300(D_800DEAD8);
        D_800DEAD8 = 0;
    }
    if (D_800DEAEC != 0) {
        func_80027300(D_800DEAEC);
        D_800DEAEC = 0;
    }
    if (D_800DEAF0 != 0) {
        func_80027300(D_800DEAF0);
        D_800DEAF0 = 0;
    }
    if (D_800DEAE8 != 0) {
        func_80027300(D_800DEAE8);
        D_800DEAE8 = 0;
    }
    if (D_800DEAD4 != 0) {
        func_80027300(D_800DEAD4);
        D_800DEAD4 = 0;
    }
    if (D_800DEAD0 != 0) {
        func_80027300(D_800DEAD0);
        D_800DEAD0 = 0;
    }
    if (D_800DEAE0 != 0) {
        func_80027300(D_800DEAE0);
        D_800DEAE0 = 0;
    }
    return 1;
}
