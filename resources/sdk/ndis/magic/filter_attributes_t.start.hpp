#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xf9302ecde6579566)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_ATTRIBUTES.Flags", flags, 0x20, 0x20, true, 0x2bfbafaf72338aa6)
#else
#define _m00
#define _m01
#endif