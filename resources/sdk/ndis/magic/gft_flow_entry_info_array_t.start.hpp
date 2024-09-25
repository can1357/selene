#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.Header", header, 0x0, 0x20, true, 0x89f2205fb681c8ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.Flags", flags, 0x20, 0x20, true, 0xf7b76377e83cdb5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.TableId", table_id, 0x40, 0x20, true, 0xef9337f2eacd5994)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.VPortId", v_port_id, 0x60, 0x20, true, 0x2e5b3787d52f61e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.ProviderFlowEntryIdStart", provider_flow_entry_id_start, 0x80, 0x40, true, 0x2352ec59d60ba7b2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.FlowEntryIdCount", flow_entry_id_count, 0xc0, 0x20, true, 0x3bf9b37ee7e239ee)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.FlowEntryInfoArrayOffset", flow_entry_info_array_offset, 0xe0, 0x20, true, 0xd1af8f95b2995f3f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.FlowEntryInfoArrayNumElements", flow_entry_info_array_num_elements, 0x100, 0x20, true, 0x20577c931d267b45)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_INFO_ARRAY.FlowEntryInfoArrayElementSize", flow_entry_info_array_element_size, 0x120, 0x20, true, 0x188aae0d453a1504)
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