#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_ENUM_SERVICE_STATUS_PROCESSA.lpServiceName", lp_service_name, 0x0, 0x40, true, 0x14de5800b59b477c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_ENUM_SERVICE_STATUS_PROCESSA.lpDisplayName", lp_display_name, 0x40, 0x40, true, 0x1887d1d2011661cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_ENUM_SERVICE_STATUS_PROCESSA.ServiceStatusProcess", service_status_process, 0x80, 0x20, true, 0xe84e832fa13f2ee7)
#else
#define _m00
#define _m01
#define _m02
#endif