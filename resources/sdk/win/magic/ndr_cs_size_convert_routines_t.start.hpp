#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, enum win::idl_cs_convert_t*, uint32_t*, uint32_t*)>*), "_NDR_CS_SIZE_CONVERT_ROUTINES.pfnNetSize", pfn_net_size, 0x0, 0x40, true, 0x1a022feac71e9442)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(cs_type_to_netcs_routine_t ), "_NDR_CS_SIZE_CONVERT_ROUTINES.pfnToNetCs", pfn_to_net_cs, 0x40, 0x40, true, 0x55921b26006174cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, enum win::idl_cs_convert_t*, uint32_t*, uint32_t*)>*), "_NDR_CS_SIZE_CONVERT_ROUTINES.pfnLocalSize", pfn_local_size, 0x80, 0x40, true, 0xac2b8d3c87e0d872)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(cs_type_from_netcs_routine_t ), "_NDR_CS_SIZE_CONVERT_ROUTINES.pfnFromNetCs", pfn_from_net_cs, 0xc0, 0x40, true, 0x7889ba5f41f8f57d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif