#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::power_idle_events_t), "FxPowerIdleTargetState.PowerIdleEvent", power_idle_event, 0x0, 0x20, true, 0x826dad5c371f0004)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::power_idle_states_t), "FxPowerIdleTargetState.PowerIdleState", power_idle_state, 0x20, 0x20, true, 0x9fcb80ce9376e42a)
#else
#define _m00
#define _m01
#endif