#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V1.Supported.Encapsulation", encapsulation, 0x0, 0x20, true, 0xea5d84397a74d2ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V1.Supported.AhEspCombined", ah_esp_combined, 0x20, 0x20, true, 0xddb7716bffc1e26d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V1.Supported.TransportTunnelCombined", transport_tunnel_combined, 0x40, 0x20, true, 0xb7a7bc2bd311534)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V1.Supported.IPv4Options", i_pv4_options, 0x60, 0x20, true, 0x8931991bd0a24078)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V1.Supported.Flags", flags, 0x80, 0x20, true, 0x80aa61b99feff618)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_supported_t), "_NDIS_IPSEC_OFFLOAD_V1.Supported", supported, 0x0, 0xa0, true, 0xd67da55f9efb27ed)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.Md5", md5, 0x0, 0x2, true, 0x3f98104caedc2e92, 2, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.Sha_1", sha_1, 0x2, 0x2, true, 0x493128b030224a4a, 2, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.Transport", transport, 0x4, 0x2, true, 0x99d0366e38365cd6, 2, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.Tunnel", tunnel, 0x6, 0x2, true, 0x13f563fcade9d449, 2, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.Send", send, 0x8, 0x2, true, 0xe35fa7363e5d65bb, 2, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH.Receive", receive, 0xa, 0x2, true, 0xedca869a6d513d88, 2, uint32_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv4ah_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4AH", i_pv4ah, 0xa0, 0x20, true, 0x9d4e289492780150)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.Des", des, 0x0, 0x2, true, 0xae20db903459af94, 2, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.TripleDes", triple_des, 0x4, 0x2, true, 0xd36d99352dfb2202, 2, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.NullEsp", null_esp, 0x6, 0x2, true, 0xcd61c04d08d21b4d, 2, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.Transport", transport, 0x8, 0x2, true, 0x1d7154a6ba8a0c0c, 2, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.Tunnel", tunnel, 0xa, 0x2, true, 0x4145a59433e57532, 2, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.Send", send, 0xc, 0x2, true, 0x6c51bf67194f74b0, 2, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP.Receive", receive, 0xe, 0x2, true, 0xbc8e66766584c4e0, 2, uint32_t)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_i_pv4esp_t), "_NDIS_IPSEC_OFFLOAD_V1.IPv4ESP", i_pv4esp, 0xc0, 0x20, true, 0xbfa7bd12d5e7922f)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif