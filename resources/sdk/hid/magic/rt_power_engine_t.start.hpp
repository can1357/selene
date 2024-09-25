#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HID_RT_POWER_ENGINE.PolicyEngineLock", policy_engine_lock, 0x0, 0x40, true, 0xb91512c175102019)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_ENGINE.PolicyEngineRunning", policy_engine_running, 0x40, 0x1, true, 0xd04730dfab356548, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HID_RT_POWER_ENGINE.PolicyChangePending", policy_change_pending, 0x41, 0x1, true, 0x3cf582c3fd7ba2c3, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif