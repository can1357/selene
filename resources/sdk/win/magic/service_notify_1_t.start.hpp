#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_1.dwVersion", dw_version, 0x0, 0x20, true, 0xfe8876d07eb2c0a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_SERVICE_NOTIFY_1.pfnNotifyCallback", pfn_notify_callback, 0x40, 0x40, true, 0x415b1778034ef5b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SERVICE_NOTIFY_1.pContext", p_context, 0x80, 0x40, true, 0x755a98251e4b3315)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_1.dwNotificationStatus", dw_notification_status, 0xc0, 0x20, true, 0x3d070a6782d7ba16)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_SERVICE_NOTIFY_1.ServiceStatus", service_status, 0xe0, 0x20, true, 0x1f2fc8adff398475)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif