#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.AsUINT64", as_uint64, 0x0, 0x40, true, 0x84b404d8e8505597)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.NumAvailableDestinations", num_available_destinations, 0x0, 0x10, true, 0x6234e335059e208f, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.SourcePortId", source_port_id, 0x10, 0x10, true, 0x7bd9c70f06e35517, 16, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.SourceNicIndex", source_nic_index, 0x20, 0x8, true, 0x92aba0ed614acf73, 8, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.NativeForwardingRequired", native_forwarding_required, 0x28, 0x1, true, 0xee2f67fc764a6a65, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.IsPacketDataSafe", is_packet_data_safe, 0x2a, 0x1, true, 0x8795a19dd385912a, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.SafePacketDataSize", safe_packet_data_size, 0x2b, 0xc, true, 0xced21ff6d9c5793c, 12, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.IsPacketDataUncached", is_packet_data_uncached, 0x37, 0x1, true, 0x1ff1ad1af92f613c, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO.IsSafePacketDataUncached", is_safe_packet_data_uncached, 0x38, 0x1, true, 0x36661813ef1b1e6e, 1, uint32_t)
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