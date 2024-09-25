#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IPSEC_PACKET_INFO.Transmit.OffloadHandle", offload_handle, 0x0, 0x40, true, 0xf274084fe3557ff5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IPSEC_PACKET_INFO.Transmit.NextOffloadHandle", next_offload_handle, 0x40, 0x40, true, 0x22f742b409cf709a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_transmit_t), "_NDIS_IPSEC_PACKET_INFO.Transmit", transmit, 0x0, 0x80, true, 0x4f79cfef8d3ca076)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_PACKET_INFO.Receive.SA_DELETE_REQ", sa_delete_req, 0x0, 0x1, true, 0x531a636035499815, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_PACKET_INFO.Receive.CRYPTO_DONE", crypto_done, 0x1, 0x1, true, 0x45b2072a8a340468, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_IPSEC_PACKET_INFO.Receive.NEXT_CRYPTO_DONE", next_crypto_done, 0x2, 0x1, true, 0x59d05a8d91866ab4, 1, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_PACKET_INFO.Receive.CryptoStatus", crypto_status, 0x20, 0x20, true, 0x3d4547b3c387fc91)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_receive_t), "_NDIS_IPSEC_PACKET_INFO.Receive", receive, 0x0, 0x40, true, 0x8cc18443fc36bbca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif