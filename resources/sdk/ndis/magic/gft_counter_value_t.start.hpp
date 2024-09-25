#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_counter_type_t), "_NDIS_GFT_COUNTER_VALUE.CounterType", counter_type, 0x0, 0x20, true, 0x6ca55b7466be5a9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_counter_value_t), "_NDIS_GFT_COUNTER_VALUE.CounterValue.Packets", packets, 0x0, 0x80, true, 0x5fdff22b1288629f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_byte_counter_value_t), "_NDIS_GFT_COUNTER_VALUE.CounterValue.Bytes", bytes, 0x0, 0x80, true, 0x85c7bbb864d4f128)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_t), "_NDIS_GFT_COUNTER_VALUE.CounterValue.PacketsBytes", packets_bytes, 0x0, 0xc0, true, 0x61713fa9f8bbdd42)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_and_state_t), "_NDIS_GFT_COUNTER_VALUE.CounterValue.PacketsBytesAndState", packets_bytes_and_state, 0x0, 0x0, true, 0xc12a7a75837ee2a7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_counter_value_t), "_NDIS_GFT_COUNTER_VALUE.CounterValue", counter_value, 0x40, 0x0, true, 0xc8539ec5868cca2b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif