#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GEN_GET_TIME_CAPS.Flags", flags, 0x0, 0x20, true, 0xe4316338de855c73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GEN_GET_TIME_CAPS.ClockPrecision", clock_precision, 0x20, 0x20, true, 0x4ec6450095694933)
#else
#define _m00
#define _m01
#endif