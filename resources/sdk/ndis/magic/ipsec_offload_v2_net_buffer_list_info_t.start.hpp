#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Transmit.OffloadHandle", offload_handle, 0x0, 0x40, true, 0x9139c91981e8e742)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Transmit", transmit, 0x0, 0x40, true, 0x78076fb23fac8e37)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Receive.SaDeleteReq", sa_delete_req, 0x0, 0x1, true, 0x50df9d74a121f7a8, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Receive.CryptoDone", crypto_done, 0x1, 0x1, true, 0x7ca5900eafdc3f9d, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Receive.NextCryptoDone", next_crypto_done, 0x2, 0x1, true, 0xb3e4e5cd6266b39e, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Receive.CryptoStatus", crypto_status, 0x10, 0x10, true, 0x1e2ca38bcf4e2d55, 16, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_receive_t), "_NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO.Receive", receive, 0x0, 0x20, true, 0x9a535e0ea372a267)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif