#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_FFH_THROTTLE_STATE_INFO.EnableLogging", enable_logging, 0x0, 0x8, true, 0x83f14bd2e199c749)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_FFH_THROTTLE_STATE_INFO.MismatchCount", mismatch_count, 0x20, 0x20, true, 0x379855d9c4d3ee2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_FFH_THROTTLE_STATE_INFO.Initialized", initialized, 0x40, 0x8, true, 0x3436419aafa00ee3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PPM_FFH_THROTTLE_STATE_INFO.LastValue", last_value, 0x80, 0x40, true, 0x2868095941b27b90)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PPM_FFH_THROTTLE_STATE_INFO.LastLogTickCount", last_log_tick_count, 0xc0, 0x40, true, 0xa39e9cfa4da112e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif