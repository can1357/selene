#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IPSEC_OFFLOAD_V2_TUNNEL_NET_BUFFER_LIST_INFO.Transmit.TunnelHandle", tunnel_handle, 0x0, 0x40, true, 0x7bfdaa314a6f500c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_IPSEC_OFFLOAD_V2_TUNNEL_NET_BUFFER_LIST_INFO.Transmit", transmit, 0x0, 0x40, true, 0xd4fd7b4d7a11a4fd)
#else
#define _m00
#define _m01
#endif