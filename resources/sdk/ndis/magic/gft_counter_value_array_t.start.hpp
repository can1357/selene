#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.Header", header, 0x0, 0x20, true, 0xa6a1cff46a4e7fa5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.Flags", flags, 0x20, 0x20, true, 0xd819d037ad66635a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.TableId", table_id, 0x40, 0x20, true, 0xb2ebda9503b73d59)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.StartId.FlowEntryId", flow_entry_id, 0x0, 0x40, true, 0x6f575dbee2381a31)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.StartId.CounterId", counter_id, 0x0, 0x20, true, 0xfb99811b7f80ffa3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_start_id_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.StartId", start_id, 0x80, 0x40, true, 0x96a0cd7fc1e37f87)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.NumCounters", num_counters, 0xc0, 0x20, true, 0xbed05c311bee5888)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.CounterValueArrayOffset", counter_value_array_offset, 0xe0, 0x20, true, 0x8ae797497cbf2372)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.CounterValueArrayNumElements", counter_value_array_num_elements, 0x100, 0x20, true, 0xb6fc3810e22d9b07)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_VALUE_ARRAY.CounterValueArrayElementSize", counter_value_array_element_size, 0x120, 0x20, true, 0xf2a519925cdba778)
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
#endif