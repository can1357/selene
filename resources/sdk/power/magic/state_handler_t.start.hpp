#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::state_handler_type_t), "POWER_STATE_HANDLER.Type", type, 0x0, 0x20, true, 0x84bb8220b413dc47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "POWER_STATE_HANDLER.RtcWake", rtc_wake, 0x20, 0x8, true, 0x61b680d7f19f8b8e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(penter_state_handler_t ), "POWER_STATE_HANDLER.Handler", handler, 0x40, 0x40, true, 0xa233e9787f8eed53)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "POWER_STATE_HANDLER.Context", context, 0x80, 0x40, true, 0x3b9c6e4d97f2bf27)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif