#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(penter_state_notify_handler_t ), "POWER_STATE_NOTIFY_HANDLER.Handler", handler, 0x0, 0x40, true, 0x2cc8926de18ee02f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "POWER_STATE_NOTIFY_HANDLER.Context", context, 0x40, 0x40, true, 0x7b1355a563bda84)
#else
#define _m00
#define _m01
#endif