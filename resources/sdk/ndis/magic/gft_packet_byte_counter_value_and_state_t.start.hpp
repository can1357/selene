#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_packet_byte_counter_value_t), "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE.PacketByteCounterValue", packet_byte_counter_value, 0x0, 0xc0, true, 0x40795e5417c97e5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile struct ndis::gft_flow_state_t), "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE.FlowState", flow_state, 0xc0, 0x40, true, 0x6d91f20be6eb095a)
#else
#define _m00
#define _m01
#endif