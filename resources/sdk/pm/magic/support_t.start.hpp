#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.Rsvd2", rsvd2, 0x0, 0x1, true, 0xdbc0f5eb225990b0, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.D1", d1, 0x1, 0x1, true, 0xd47fa7d606dae401, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.D2", d2, 0x2, 0x1, true, 0x2fe822ab4c7d108e, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.PMED0", pmed0, 0x3, 0x1, true, 0x6a2f47e009eadc47, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.PMED1", pmed1, 0x4, 0x1, true, 0x5b0464444d25a3b, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.PMED2", pmed2, 0x5, 0x1, true, 0xe8f0a41772385162, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.PMED3Hot", pmed3_hot, 0x6, 0x1, true, 0x4bc22e50265cd012, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PM_SUPPORT.PMED3Cold", pmed3_cold, 0x7, 0x1, true, 0xf346b305ca422fad, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif