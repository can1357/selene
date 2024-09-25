#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Transmit.NextHeader", next_header, 0x0, 0x8, true, 0x4d53f4266afdebb7, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Transmit.PadLength", pad_length, 0x8, 0x8, true, 0xe90969eb655eca61, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Transmit.AhHeaderOffset", ah_header_offset, 0x10, 0x8, true, 0xe333f072e52fa487, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Transmit.EspHeaderOffset", esp_header_offset, 0x18, 0x8, true, 0x9bd56151bb852ff3, 8, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Transmit", transmit, 0x0, 0x20, true, 0x6f40b4310cb9b689)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Receive.NextHeader", next_header, 0x0, 0x8, true, 0x3f0017e4104e97e2, 8, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Receive.PadLength", pad_length, 0x8, 0x8, true, 0x121ca85ebb846a22, 8, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Receive.HeaderInfoSet", header_info_set, 0x10, 0x1, true, 0x6fbebeb9232a4252, 1, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_receive_t), "_NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO.Receive", receive, 0x0, 0x20, true, 0x6300a4a2731b1b26)
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