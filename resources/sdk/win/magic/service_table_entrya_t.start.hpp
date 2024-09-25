#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SERVICE_TABLE_ENTRYA.lpServiceName", lp_service_name, 0x0, 0x40, true, 0xe18b4534dd88d8e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, char**)>*), "_SERVICE_TABLE_ENTRYA.lpServiceProc", lp_service_proc, 0x40, 0x40, true, 0x1d90dd2bbb3b969c)
#else
#define _m00
#define _m01
#endif