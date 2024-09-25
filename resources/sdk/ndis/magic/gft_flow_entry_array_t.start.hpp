#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_FLOW_ENTRY_ARRAY.Header", header, 0x0, 0x20, true, 0xad7e0ea94a4ea620)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ARRAY.Flags", flags, 0x20, 0x20, true, 0x9a2e778d4a30081d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_flow_entry_type_t), "_NDIS_GFT_FLOW_ENTRY_ARRAY.EntryType", entry_type, 0x40, 0x20, true, 0x21e2c297717ddcd1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ARRAY.FlowEntryArrayOffset", flow_entry_array_offset, 0x60, 0x20, true, 0x118aea20d436b8b6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ARRAY.FlowEntryArrayNumElements", flow_entry_array_num_elements, 0x80, 0x20, true, 0x62ca31166164e6ac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ARRAY.FlowEntryArrayElementSize", flow_entry_array_element_size, 0xa0, 0x20, true, 0x3885bf1285b75428)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif