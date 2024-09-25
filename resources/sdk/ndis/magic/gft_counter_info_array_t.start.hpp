#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_COUNTER_INFO_ARRAY.Header", header, 0x0, 0x20, true, 0xb47e3aafd7646adf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO_ARRAY.Flags", flags, 0x20, 0x20, true, 0x3aa3699537301234)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO_ARRAY.TableId", table_id, 0x40, 0x20, true, 0x2e9d26f901cd0c53)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO_ARRAY.CounterInfoArrayOffset", counter_info_array_offset, 0x60, 0x20, true, 0x51a89a1c67853ae3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO_ARRAY.CounterInfoArrayNumElements", counter_info_array_num_elements, 0x80, 0x20, true, 0xffed96340cf7e74e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO_ARRAY.CounterInfoArrayElementSize", counter_info_array_element_size, 0xa0, 0x20, true, 0x7e0c5384b1662724)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif