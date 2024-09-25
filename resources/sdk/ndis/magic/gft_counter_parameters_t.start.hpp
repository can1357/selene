#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_COUNTER_PARAMETERS.Header", header, 0x0, 0x20, true, 0x855dabf8ea54cd71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xf027dffa83abc606)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_PARAMETERS.TableId", table_id, 0x40, 0x20, true, 0x5cf88c342f7a8f59)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_update_frequency_t), "_NDIS_GFT_COUNTER_PARAMETERS.CounterUpdateFrequency", counter_update_frequency, 0x60, 0x20, true, 0x17aa7634e8e850a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_type_t), "_NDIS_GFT_COUNTER_PARAMETERS.CounterType", counter_type, 0x80, 0x20, true, 0x996db6f1ecdebd6b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_PARAMETERS.CounterIdStart", counter_id_start, 0xa0, 0x20, true, 0x956f93987ca3d080)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_PARAMETERS.NumCounters", num_counters, 0xc0, 0x20, true, 0xfa4e03019d049531)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_COUNTER_PARAMETERS.UpdatePeriod", update_period, 0xe0, 0x20, true, 0x3c5486eb4866652d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_counter_value_t*), "_NDIS_GFT_COUNTER_PARAMETERS.CounterValuesBufferStart.PacketCounters", packet_counters, 0x0, 0x40, true, 0x24e39fd1a4922bc6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_byte_counter_value_t*), "_NDIS_GFT_COUNTER_PARAMETERS.CounterValuesBufferStart.ByteCounters", byte_counters, 0x0, 0x40, true, 0x316e9a9b6ff2241d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_t*), "_NDIS_GFT_COUNTER_PARAMETERS.CounterValuesBufferStart.PacketByteCounters", packet_byte_counters, 0x0, 0x40, true, 0xe78dcb997c142181)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_and_state_t*), "_NDIS_GFT_COUNTER_PARAMETERS.CounterValuesBufferStart.PacketByteCountersAndState", packet_byte_counters_and_state, 0x0, 0x40, true, 0x5d06579d9401dde)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_counter_values_buffer_start_t), "_NDIS_GFT_COUNTER_PARAMETERS.CounterValuesBufferStart", counter_values_buffer_start, 0x100, 0x40, true, 0x6c175a74e26b970d)
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