#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_ENUM_SERVICE_STATUSA.lpServiceName", lp_service_name, 0x0, 0x40, true, 0x52df1a7e0a1a41f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_ENUM_SERVICE_STATUSA.lpDisplayName", lp_display_name, 0x40, 0x40, true, 0x907b12831950bbcc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_t), "_ENUM_SERVICE_STATUSA.ServiceStatus", service_status, 0x80, 0xe0, true, 0xd6c6d0c664ae5047)
#else
#define _m00
#define _m01
#define _m02
#endif