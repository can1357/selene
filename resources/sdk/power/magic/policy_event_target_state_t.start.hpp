#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::power_policy_event_t), "POWER_POLICY_EVENT_TARGET_STATE.PowerPolicyEvent", power_policy_event, 0x0, 0x20, true, 0xfac8f4cf4cb934e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "POWER_POLICY_EVENT_TARGET_STATE.TargetState", target_state, 0x20, 0x20, true, 0x4bb05481aabe9efd)
#else
#define _m00
#define _m01
#endif