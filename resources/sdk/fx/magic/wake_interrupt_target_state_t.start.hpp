#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::wake_interrupt_events_t), "FxWakeInterruptTargetState.WakeInterruptEvent", wake_interrupt_event, 0x0, 0x20, true, 0x1256dfe2982e0e69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::wake_interrupt_states_t), "FxWakeInterruptTargetState.WakeInterruptState", wake_interrupt_state, 0x20, 0x20, true, 0x431e43de080d903b)
#else
#define _m00
#define _m01
#endif