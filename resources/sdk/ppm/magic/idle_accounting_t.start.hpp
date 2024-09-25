#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING.StateCount", state_count, 0x0, 0x20, true, 0xc2952c2883718168)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING.TotalTransitions", total_transitions, 0x20, 0x20, true, 0x319d2a82c418d9dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLE_ACCOUNTING.ResetCount", reset_count, 0x40, 0x20, true, 0xb801fdc09ed6aaeb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_IDLE_ACCOUNTING.StartTime", start_time, 0x80, 0x40, true, 0xa1cfb02f6fda9354)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ppm::idle_state_accounting_t, 1>), "PPM_IDLE_ACCOUNTING.State", state, 0xc0, 0x80, true, 0xb533f079cfe036e4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif