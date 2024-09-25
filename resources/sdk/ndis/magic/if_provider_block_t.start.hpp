#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_IF_PROVIDER_BLOCK.Header", header, 0x0, 0x0, false, 0xa7b1de12e81fde0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_PROVIDER_BLOCK.Link", link, 0x0, 0x0, false, 0x89fc42f2a05c219b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_PROVIDER_BLOCK.IfList", if_list, 0x0, 0x0, false, 0x9ba63e68bb463054)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IF_PROVIDER_BLOCK.IfProviderContext", if_provider_context, 0x0, 0x0, false, 0x8fa81ebbce20dadf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_provider_characteristics_t), "_NDIS_IF_PROVIDER_BLOCK.ProviderCharacteristics", provider_characteristics, 0x0, 0x0, false, 0x6e534576a9ac41f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif