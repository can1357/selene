#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.Header", header, 0x0, 0x20, true, 0x7383b4bb783f449b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.Flags", flags, 0x20, 0x20, true, 0x7c4a1b6a8203411e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.TableId", table_id, 0x40, 0x20, true, 0x3ee7b992fa7e97ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.VPortId", v_port_id, 0x60, 0x20, true, 0xbb7882b9e0a311b3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdArray.ProviderFlowEntryIdArrayOffset", provider_flow_entry_id_array_offset, 0x0, 0x20, true, 0x2fde5c5655f79917)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdArray.ProviderFlowEntryIdArrayNumElements", provider_flow_entry_id_array_num_elements, 0x20, 0x20, true, 0x3e20d901ca12ca29)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdArray.ProviderFlowEntryIdArrayElementSize", provider_flow_entry_id_array_element_size, 0x40, 0x20, true, 0x8ba578f0ad5561d1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_flow_entry_id_array_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdArray", flow_entry_id_array, 0x0, 0x60, true, 0x86663b2913c89bf)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdAndCounterArray.ProviderFlowEntryIdAndCounterArrayOffset", provider_flow_entry_id_and_counter_array_offset, 0x0, 0x20, true, 0xaa9f9846faddac7c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdAndCounterArray.ProviderFlowEntryIdAndCounterArrayNumElements", provider_flow_entry_id_and_counter_array_num_elements, 0x20, 0x20, true, 0x7e1e3e1bc0144c7d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdAndCounterArray.ProviderFlowEntryIdAndCounterArrayElementSize", provider_flow_entry_id_and_counter_array_element_size, 0x40, 0x20, true, 0x87623a2a6279fcec)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_flow_entry_id_and_counter_array_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray.FlowEntryIdAndCounterArray", flow_entry_id_and_counter_array, 0x0, 0x60, true, 0x8db3ed0aa30186e0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_id_array_t), "_NDIS_GFT_FLOW_ENTRY_ID_ARRAY.IdArray", id_array, 0x80, 0x60, true, 0x397e9e05ca59658)
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
#define _m09
#define _m10
#define _m11
#define _m12
#endif