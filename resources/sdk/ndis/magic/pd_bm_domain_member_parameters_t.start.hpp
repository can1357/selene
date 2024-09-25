#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS.Header", header, 0x0, 0x20, true, 0x69b28571c8ee1b7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x78e8044b57155496)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS.MiniportAdapterContext", miniport_adapter_context, 0x40, 0x40, true, 0xccdfb19c28a5db1d)
#else
#define _m00
#define _m01
#define _m02
#endif