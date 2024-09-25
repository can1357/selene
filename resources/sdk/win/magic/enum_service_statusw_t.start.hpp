#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ENUM_SERVICE_STATUSW.lpServiceName", lp_service_name, 0x0, 0x40, true, 0x7278d912087b7a26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ENUM_SERVICE_STATUSW.lpDisplayName", lp_display_name, 0x40, 0x40, true, 0xedccdaca93ce855)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_t), "_ENUM_SERVICE_STATUSW.ServiceStatus", service_status, 0x80, 0xe0, true, 0x334dc6df8bf99d13)
#else
#define _m00
#define _m01
#define _m02
#endif