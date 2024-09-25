#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_SYSTEM_POWER_STATE_DISABLE_REASON.AffectedState", affected_state, 0x0, 0x40, true, 0xe41467749555567c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_STATE_DISABLE_REASON.PowerReasonCode", power_reason_code, 0x40, 0x20, true, 0xeb0f4a9f66d3b807)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_STATE_DISABLE_REASON.PowerReasonLength", power_reason_length, 0x60, 0x20, true, 0x2d52d1f380f081a2)
#else
#define _m00
#define _m01
#define _m02
#endif