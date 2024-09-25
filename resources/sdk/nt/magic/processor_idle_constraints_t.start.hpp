#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_IDLE_CONSTRAINTS.TotalTime", total_time, 0x0, 0x40, true, 0x6331385745381def)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_IDLE_CONSTRAINTS.IdleTime", idle_time, 0x40, 0x40, true, 0xc71e276ed12cb0f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_IDLE_CONSTRAINTS.ExpectedIdleDuration", expected_idle_duration, 0x80, 0x40, true, 0x11394a6a8a1e7f5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESSOR_IDLE_CONSTRAINTS.MaxIdleDuration", max_idle_duration, 0xc0, 0x40, true, 0x2ca941af2b4d4e22)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_CONSTRAINTS.OverrideState", override_state, 0x100, 0x20, true, 0xb02744a01bba651d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESSOR_IDLE_CONSTRAINTS.TimeCheck", time_check, 0x120, 0x20, true, 0xdbaa311507e98047)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.PromotePercent", promote_percent, 0x140, 0x8, true, 0x5c40b8157c6d6a7b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.DemotePercent", demote_percent, 0x148, 0x8, true, 0x12dcd9b98390830b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.Parked", parked, 0x150, 0x8, true, 0x6e6fc068caf27504)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.Interruptible", interruptible, 0x158, 0x8, true, 0xfe888071987db2c9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.PlatformIdle", platform_idle, 0x160, 0x8, true, 0x7f945d73eb60ba3f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.ExpectedWakeReason", expected_wake_reason, 0x168, 0x8, true, 0x2cd21054f8c98e7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_IDLE_CONSTRAINTS.IdleStateMax", idle_state_max, 0x170, 0x8, true, 0xa2588eed7daba4e7)
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
#define _m11
#define _m12
#endif