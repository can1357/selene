#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::description_header_t), "_XSDT.Header", header, 0x0, 0x20, true, 0x2003f781045c7ae9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<__unaligned int64_t, 1>), "_XSDT.Tables", tables, 0x120, 0x40, true, 0x2293c4371817e5c6)
#else
#define _m00
#define _m01
#endif