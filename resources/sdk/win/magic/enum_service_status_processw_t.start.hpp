#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ENUM_SERVICE_STATUS_PROCESSW.lpServiceName", lp_service_name, 0x0, 0x40, true, 0x9f09e9fc54e480fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ENUM_SERVICE_STATUS_PROCESSW.lpDisplayName", lp_display_name, 0x40, 0x40, true, 0x37dbe705e3c7f87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_ENUM_SERVICE_STATUS_PROCESSW.ServiceStatusProcess", service_status_process, 0x80, 0x20, true, 0x1016e551e3941038)
#else
#define _m00
#define _m01
#define _m02
#endif