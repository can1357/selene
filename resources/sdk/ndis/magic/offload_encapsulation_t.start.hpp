#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_OFFLOAD_ENCAPSULATION.Header", header, 0x0, 0x20, true, 0x5ad374a22612e6b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv4.Enabled", enabled, 0x0, 0x20, true, 0xddd5778c891c00f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv4.EncapsulationType", encapsulation_type, 0x20, 0x20, true, 0x9f1bca9f9af96c21)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv4.HeaderSize", header_size, 0x40, 0x20, true, 0xc3ff246b4213c534)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_i_pv4_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv4", i_pv4, 0x20, 0x60, true, 0x933ce0f231299283)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv6.Enabled", enabled, 0x0, 0x20, true, 0x5395d7bd86c4367f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv6.EncapsulationType", encapsulation_type, 0x20, 0x20, true, 0xe3e267ef7bc43163)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv6.HeaderSize", header_size, 0x40, 0x20, true, 0x456f49c8200db3a4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_i_pv6_t), "_NDIS_OFFLOAD_ENCAPSULATION.IPv6", i_pv6, 0x80, 0x60, true, 0x97a267dd1d76b707)
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