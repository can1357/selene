#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_READ_RECOVERY_PAGE.PageCode", page_code, 0x0, 0x6, true, 0x50accee76eb5b3c3, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_RECOVERY_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0x84cb9cc0c37c87ae, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_READ_RECOVERY_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x30525f722312809d)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_RECOVERY_PAGE.DCRBit", dcr_bit, 0x10, 0x1, true, 0xa97568a18175463d, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_RECOVERY_PAGE.DTEBit", dte_bit, 0x11, 0x1, true, 0xdaf3918a138e1cb2, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_RECOVERY_PAGE.PERBit", per_bit, 0x12, 0x1, true, 0xcd8808266c57ed09, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_RECOVERY_PAGE.RCBit", rc_bit, 0x14, 0x1, true, 0x6e77f8c2971c61f6, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_READ_RECOVERY_PAGE.TBBit", tb_bit, 0x15, 0x1, true, 0xc04beae9d3c0986f, 1, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_READ_RECOVERY_PAGE.ReadRetryCount", read_retry_count, 0x18, 0x8, true, 0xf1255674ab04ef26)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif