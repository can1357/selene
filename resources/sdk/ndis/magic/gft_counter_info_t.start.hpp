#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_COUNTER_INFO.Header", header, 0x0, 0x20, true, 0xb8869e02e707088d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO.Flags", flags, 0x20, 0x20, true, 0xa34c892417b433fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO.CounterIdStart", counter_id_start, 0x40, 0x20, true, 0xccd4ac572b83e5a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO.NumCounters", num_counters, 0x60, 0x20, true, 0x791da30fa1f47018)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_update_frequency_t), "_NDIS_GFT_COUNTER_INFO.CounterUpdateFrequency", counter_update_frequency, 0x80, 0x20, true, 0x353ece03567e9e8c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_type_t), "_NDIS_GFT_COUNTER_INFO.CounterType", counter_type, 0xa0, 0x20, true, 0x84cce8f8557f5877)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_INFO.UpdatePeriod", update_period, 0xc0, 0x20, true, 0xc41ecbf33ed03084)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif