#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_FLOW_ENTRY_ID_AND_COUNTER.FlowEntryId", flow_entry_id, 0x0, 0x40, true, 0xffc8994a91f283f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gft_counter_value_t), "_NDIS_GFT_FLOW_ENTRY_ID_AND_COUNTER.CounterValue", counter_value, 0x40, 0x40, true, 0x4f9fb34c6bf59051)
#else
#define _m00
#define _m01
#endif