#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WRAPPER_CONFIGURATION_HANDLE.Header", header, 0x0, 0x20, true, 0xdbc98d9b9e4abf8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_WRAPPER_CONFIGURATION_HANDLE.Miniport", miniport, 0x40, 0x40, true, 0x3a94638f08f2aadd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WRAPPER_CONFIGURATION_HANDLE.Flags", flags, 0x80, 0x20, true, 0x10705cf54e73635f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::query_registry_table_t, 2>), "_NDIS_WRAPPER_CONFIGURATION_HANDLE.ParametersQueryTable", parameters_query_table, 0xc0, 0x80, true, 0x345e362e173bab73)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif