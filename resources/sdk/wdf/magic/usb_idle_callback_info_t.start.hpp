#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_IDLE_CALLBACK_INFO.IdleCallback", idle_callback, 0x0, 0x40, true, 0xaa59b9f3dd2aac30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_IDLE_CALLBACK_INFO.IdleContext", idle_context, 0x40, 0x40, true, 0x7e4f6394ffe8974f)
#else
#define _m00
#define _m01
#endif