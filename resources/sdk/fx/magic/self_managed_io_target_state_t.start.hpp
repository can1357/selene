#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::self_managed_io_events_t), "FxSelfManagedIoTargetState.SelfManagedIoEvent", self_managed_io_event, 0x0, 0x20, true, 0x5bf80c3aeb54df4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::self_managed_io_states_t), "FxSelfManagedIoTargetState.SelfManagedIoState", self_managed_io_state, 0x20, 0x20, true, 0x3ee3f0f24b4bfddb)
#else
#define _m00
#define _m01
#endif