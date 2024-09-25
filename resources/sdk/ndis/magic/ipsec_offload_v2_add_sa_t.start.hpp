#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_IPSEC_OFFLOAD_V2_ADD_SA.Header", header, 0x0, 0x20, true, 0xd417a713027cc973)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ipsec_offload_v2_add_sa_t*), "_IPSEC_OFFLOAD_V2_ADD_SA.Next", next, 0x40, 0x40, true, 0xf4def98823b37ebe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ADD_SA.NumExtHdrs", num_ext_hdrs, 0x80, 0x20, true, 0x772d07380f249b0e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ADD_SA.Flags", flags, 0xa0, 0x20, true, 0x2d25f2a08d741a6e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ADD_SA.IPv4Endpoints.SrcAddr", src_addr, 0x0, 0x20, true, 0x28d200fab75f59d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ADD_SA.IPv4Endpoints.DestAddr", dest_addr, 0x20, 0x20, true, 0x428d2cd4e61d521f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_endpoints_t), "_IPSEC_OFFLOAD_V2_ADD_SA.IPv4Endpoints", i_pv4_endpoints, 0xc0, 0x40, true, 0xc925d650ee222930)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IPSEC_OFFLOAD_V2_ADD_SA.IPv6Endpoints.SrcAddr", src_addr, 0x0, 0x80, true, 0xef107e0cfae2f494)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_IPSEC_OFFLOAD_V2_ADD_SA.IPv6Endpoints.DestAddr", dest_addr, 0x80, 0x80, true, 0xbc9cf6a4464af63e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv6_endpoints_t), "_IPSEC_OFFLOAD_V2_ADD_SA.IPv6Endpoints", i_pv6_endpoints, 0xc0, 0x0, true, 0xd1e42f56b5cbdb8a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IPSEC_OFFLOAD_V2_ADD_SA.OffloadHandle", offload_handle, 0x1c0, 0x40, true, 0xa5c5f0751f87895b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ADD_SA.UdpEspEncapsulation", udp_esp_encapsulation, 0x200, 0x20, true, 0x958320f27aa26a66)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::ipsec_offload_v2_security_association_t, 2>), "_IPSEC_OFFLOAD_V2_ADD_SA.SecAssoc", sec_assoc, 0x220, 0x0, true, 0xa23b555af484862b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ADD_SA.KeyLength", key_length, 0x520, 0x20, true, 0x4935e5548bb1cf19)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_IPSEC_OFFLOAD_V2_ADD_SA.KeyData", key_data, 0x540, 0x8, true, 0xdb122036852f4571)
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
#define _m13
#define _m14
#endif