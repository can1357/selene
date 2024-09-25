#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO.IdleCallback", idle_callback, 0x0, 0x40, true, 0xe895b85fa53c4434)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO.IdleContext", idle_context, 0x40, 0x40, true, 0x6babd0ecfa7ac00b)
#else
#define _m00
#define _m01
#endif