#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxUsbIdleInfo.m_IdleCallbackEvent", m_idle_callback_event, 0x0, 0x40, true, 0xccef5015200ba44a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::auto_irp_t), "FxUsbIdleInfo.m_IdleIrp", m_idle_irp, 0x40, 0x40, true, 0x9a6b28895f34ec56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_idle_callback_info_t), "FxUsbIdleInfo.m_CallbackInfo", m_callback_info, 0x80, 0x80, true, 0x9cd67038388a61a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbIdleInfo.m_EventDropped", m_event_dropped, 0x100, 0x8, true, 0x6e455ca0547523a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif