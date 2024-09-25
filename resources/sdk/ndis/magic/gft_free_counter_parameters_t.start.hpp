#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.Header", header, 0x0, 0x20, true, 0x6a3cde44668ae7a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xdec3321f5ce28e11)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.TableId", table_id, 0x40, 0x20, true, 0xf30ebeb0a90bf741)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.CounterIdStart", counter_id_start, 0x60, 0x20, true, 0xb0c7cc50c72b270d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.NumCounters", num_counters, 0x80, 0x20, true, 0x13b638efb73a0a8e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.LastCounterValueAndStateArrayOffset", last_counter_value_and_state_array_offset, 0xa0, 0x20, true, 0x9ee1a854550ea9df)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.LastCounterValueAndStateArrayNumElements", last_counter_value_and_state_array_num_elements, 0xc0, 0x20, true, 0xf2a3bb34bbe725e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_FREE_COUNTER_PARAMETERS.LastCounterValueAndStateArrayElementSize", last_counter_value_and_state_array_element_size, 0xe0, 0x20, true, 0x549b661143dd2aa7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif