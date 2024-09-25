#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PERFINFO_CCSWAP_IDLE_SHORT.DataType", data_type, 0x0, 0x2, true, 0x5e3a8cc05c88c53b, 2, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint14_t), "_PERFINFO_CCSWAP_IDLE_SHORT.TimeDelta", time_delta, 0x2, 0xe, true, 0x894760434ce63136, 14, uint16_t)
#else
#define _m00
#define _m01
#endif