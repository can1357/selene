#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_STATE_ENTER.State", state, 0x0, 0x20, true, 0x71bceb0ac505d6a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_PPM_IDLE_STATE_ENTER.Properties", properties, 0x20, 0x10, true, 0x38343bc18d57c9eb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_PPM_IDLE_STATE_ENTER.ExpectedWakeReason", expected_wake_reason, 0x30, 0x8, true, 0xe2e6d47a7ac651f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_IDLE_STATE_ENTER.Flags", flags, 0x20, 0x20, true, 0x9d08951f0fb7e9f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PPM_IDLE_STATE_ENTER.ExpectedDuration", expected_duration, 0x40, 0x40, true, 0x4ff580dc23b29267)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif