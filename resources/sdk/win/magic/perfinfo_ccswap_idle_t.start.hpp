#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PERFINFO_CCSWAP_IDLE.DataType", data_type, 0x0, 0x2, true, 0x7eb517da0eeafb88, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_PERFINFO_CCSWAP_IDLE.TimeDelta", time_delta, 0x2, 0x1e, true, 0xae05fc52a55ae601, 30, uint32_t)
#else
#define _m00
#define _m01
#endif