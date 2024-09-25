#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::pnp_event_t), "PNP_EVENT_TARGET_STATE.PnpEvent", pnp_event, 0x0, 0x20, true, 0xa2d8966a0c1e4f48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "PNP_EVENT_TARGET_STATE.TargetState", target_state, 0x20, 0x20, true, 0x24456e452d07f204)
#else
#define _m00
#define _m01
#endif