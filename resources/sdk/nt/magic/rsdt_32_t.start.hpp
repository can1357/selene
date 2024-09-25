#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::description_header_t), "_RSDT_32.Header", header, 0x0, 0x20, true, 0x49c0a8a71477725d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_RSDT_32.Tables", tables, 0x120, 0x20, true, 0xa684fa25ec228c16)
#else
#define _m00
#define _m01
#endif