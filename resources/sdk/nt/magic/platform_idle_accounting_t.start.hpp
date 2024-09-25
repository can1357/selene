#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_ACCOUNTING.ResetCount", reset_count, 0x0, 0x20, true, 0x6c23c653cf25e52c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_ACCOUNTING.StateCount", state_count, 0x20, 0x20, true, 0x1ed00a2dbc3c45e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLATFORM_IDLE_ACCOUNTING.DeepSleepCount", deep_sleep_count, 0x40, 0x20, true, 0x73d9e53d1675601c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ppm::idle_bucket_time_type_t), "_PLATFORM_IDLE_ACCOUNTING.TimeUnit", time_unit, 0x60, 0x20, true, 0xa9436f8f33773edf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PLATFORM_IDLE_ACCOUNTING.StartTime", start_time, 0x80, 0x40, true, 0xcaf3982e1010e909)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::platform_idle_state_accounting_t, 1>), "_PLATFORM_IDLE_ACCOUNTING.State", state, 0xc0, 0x80, true, 0x8d5cde9092be110e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif