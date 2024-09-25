#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGW.dwServiceType", dw_service_type, 0x0, 0x20, true, 0x9478d63a5084b85e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGW.dwStartType", dw_start_type, 0x20, 0x20, true, 0xdb9904274ceee31c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGW.dwErrorControl", dw_error_control, 0x40, 0x20, true, 0x19f8e0d62f1d06ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_QUERY_SERVICE_CONFIGW.lpBinaryPathName", lp_binary_path_name, 0x80, 0x40, true, 0xaade4cec44d06b52)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_QUERY_SERVICE_CONFIGW.lpLoadOrderGroup", lp_load_order_group, 0xc0, 0x40, true, 0x54da054e1404d581)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGW.dwTagId", dw_tag_id, 0x100, 0x20, true, 0x47e90ced92d463d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_QUERY_SERVICE_CONFIGW.lpDependencies", lp_dependencies, 0x140, 0x40, true, 0x1134de9c035fb91b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_QUERY_SERVICE_CONFIGW.lpServiceStartName", lp_service_start_name, 0x180, 0x40, true, 0xa586deaaf7fdc748)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_QUERY_SERVICE_CONFIGW.lpDisplayName", lp_display_name, 0x1c0, 0x40, true, 0xc185758154d4984)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif