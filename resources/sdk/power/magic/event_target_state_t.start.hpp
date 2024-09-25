#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::power_event_t), "POWER_EVENT_TARGET_STATE.PowerEvent", power_event, 0x0, 0x20, true, 0xe825f46eb4faaaec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "POWER_EVENT_TARGET_STATE.TargetState", target_state, 0x20, 0x20, true, 0x3b53ee207b51ace1)
#else
#define _m00
#define _m01
#endif