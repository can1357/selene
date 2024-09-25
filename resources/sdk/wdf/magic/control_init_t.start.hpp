#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "ControlInit.ShutdownNotification", shutdown_notification, 0x0, 0x40, true, 0xc664af0cd8945ee9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "ControlInit.Flags", flags, 0x40, 0x8, true, 0x1cfee65c9678116c)
#else
#define _m00
#define _m01
#endif