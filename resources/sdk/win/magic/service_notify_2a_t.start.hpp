#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_2A.dwVersion", dw_version, 0x0, 0x20, true, 0xdcb751c4f2634c5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_SERVICE_NOTIFY_2A.pfnNotifyCallback", pfn_notify_callback, 0x40, 0x40, true, 0xed874d8178d3a58a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SERVICE_NOTIFY_2A.pContext", p_context, 0x80, 0x40, true, 0xf025149d9ed0db9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_2A.dwNotificationStatus", dw_notification_status, 0xc0, 0x20, true, 0xaa9d28a04d342b15)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_SERVICE_NOTIFY_2A.ServiceStatus", service_status, 0xe0, 0x20, true, 0xc8bc7a810766923d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_NOTIFY_2A.dwNotificationTriggered", dw_notification_triggered, 0x200, 0x20, true, 0x3febad30c421b5cf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SERVICE_NOTIFY_2A.pszServiceNames", psz_service_names, 0x240, 0x40, true, 0xb42f8c5a43c8d1aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif