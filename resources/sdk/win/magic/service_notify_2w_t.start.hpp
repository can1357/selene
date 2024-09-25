#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_2W.dwVersion", dw_version, 0x0, 0x20, true, 0xee8b51cb2508a99d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_SERVICE_NOTIFY_2W.pfnNotifyCallback", pfn_notify_callback, 0x40, 0x40, true, 0x58b596635096b864)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SERVICE_NOTIFY_2W.pContext", p_context, 0x80, 0x40, true, 0x59002a5c0940e12c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_2W.dwNotificationStatus", dw_notification_status, 0xc0, 0x20, true, 0x2dbd9c2e666b70db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_SERVICE_NOTIFY_2W.ServiceStatus", service_status, 0xe0, 0x20, true, 0x6afdff02d774e72)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_2W.dwNotificationTriggered", dw_notification_triggered, 0x200, 0x20, true, 0x33d1c7ce7df03d39)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SERVICE_NOTIFY_2W.pszServiceNames", psz_service_names, 0x240, 0x40, true, 0x8c2cec5371232013)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif