#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_INFO_EXCEPTIONS.PageCode", page_code, 0x0, 0x6, true, 0x18fc07cb706c0fdd, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_INFO_EXCEPTIONS.PSBit", ps_bit, 0x7, 0x1, true, 0x607ff1be7ddc9d57, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_INFO_EXCEPTIONS.PageLength", page_length, 0x8, 0x8, true, 0xbdead8cc10fe4da2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_INFO_EXCEPTIONS.Flags", flags, 0x10, 0x8, true, 0xf475904c7bbf9cb1)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_INFO_EXCEPTIONS.LogErr", log_err, 0x10, 0x1, true, 0xdc9d5c328b1e2857, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_INFO_EXCEPTIONS.Test", test, 0x12, 0x1, true, 0x2d84a9778a28d5af, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_INFO_EXCEPTIONS.Dexcpt", dexcpt, 0x13, 0x1, true, 0x3098211fb8a78594, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_INFO_EXCEPTIONS.Perf", perf, 0x17, 0x1, true, 0xe7a613146dc77970, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_INFO_EXCEPTIONS.ReportMethod", report_method, 0x18, 0x4, true, 0xd881a2c0f803c15f, 4, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MODE_INFO_EXCEPTIONS.IntervalTimer", interval_timer, 0x20, 0x20, true, 0x146b2b4af3ef5227)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_MODE_INFO_EXCEPTIONS.ReportCount", report_count, 0x40, 0x20, true, 0x7eac9b678762b019)
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
#define _m09
#define _m10
#endif