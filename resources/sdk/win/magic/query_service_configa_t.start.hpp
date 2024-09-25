#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGA.dwServiceType", dw_service_type, 0x0, 0x20, true, 0xc4dd1d759c136bb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGA.dwStartType", dw_start_type, 0x20, 0x20, true, 0x1dc6ffa72f1d54cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGA.dwErrorControl", dw_error_control, 0x40, 0x20, true, 0xd7d1df4651d1b3c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_QUERY_SERVICE_CONFIGA.lpBinaryPathName", lp_binary_path_name, 0x80, 0x40, true, 0x4fe00ccdd301b3fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_QUERY_SERVICE_CONFIGA.lpLoadOrderGroup", lp_load_order_group, 0xc0, 0x40, true, 0x17418d7bcae391f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_SERVICE_CONFIGA.dwTagId", dw_tag_id, 0x100, 0x20, true, 0x5f57d993005b5e6b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_QUERY_SERVICE_CONFIGA.lpDependencies", lp_dependencies, 0x140, 0x40, true, 0x507d3451bf48d71e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_QUERY_SERVICE_CONFIGA.lpServiceStartName", lp_service_start_name, 0x180, 0x40, true, 0xd212d193cff781f3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_QUERY_SERVICE_CONFIGA.lpDisplayName", lp_display_name, 0x1c0, 0x40, true, 0xe08a91ebe35ef17a)
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