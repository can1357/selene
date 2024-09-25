#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hid::event_t), "_STATE_TRANSITION.Event", event, 0x0, 0x20, true, 0xff6f54be2962c99d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hid::state_t), "_STATE_TRANSITION.TargetState", target_state, 0x20, 0x20, true, 0xb0bc7ab728ae9559)
#else
#define _m00
#define _m01
#endif