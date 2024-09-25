#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SERVICE_TABLE_ENTRYW.lpServiceName", lp_service_name, 0x0, 0x40, true, 0x5073760655dd7eb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint32_t, wchar_t**)>*), "_SERVICE_TABLE_ENTRYW.lpServiceProc", lp_service_proc, 0x40, 0x40, true, 0xde04d972d4120dd0)
#else
#define _m00
#define _m01
#endif