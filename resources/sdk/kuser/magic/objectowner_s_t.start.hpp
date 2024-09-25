#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_OBJECTOWNER_S.Lock", lock, 0x0, 0x1, true, 0x35342e99f292f9cc, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_OBJECTOWNER_S.Pid_Shifted", pid_shifted, 0x1, 0x1f, true, 0xa1fe8f5107f448c1, 31, uint32_t)
#else
#define _m00
#define _m01
#endif