#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_BM_DOMAIN_PARAMETERS.Header", header, 0x0, 0x20, true, 0x16788f54f5b86ae5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BM_DOMAIN_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x1f6ef6237f40e87f)
#else
#define _m00
#define _m01
#endif