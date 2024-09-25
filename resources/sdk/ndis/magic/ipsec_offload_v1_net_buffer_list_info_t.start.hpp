#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Transmit.OffloadHandle", offload_handle, 0x0, 0x40, true, 0x2be87b4a71d187c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Transmit", transmit, 0x0, 0x40, true, 0x982f41b5c9e59057)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Receive.SaDeleteReq", sa_delete_req, 0x0, 0x1, true, 0x312c2c52a98872f4, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Receive.CryptoDone", crypto_done, 0x1, 0x1, true, 0x23af5fa41be31285, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Receive.NextCryptoDone", next_crypto_done, 0x2, 0x1, true, 0xacacb98518184e52, 1, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Receive.CryptoStatus", crypto_status, 0x10, 0x10, true, 0x5fad8542f2b8eaf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_receive_t), "_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO.Receive", receive, 0x0, 0x20, true, 0xcd754a57b6e1d99a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif