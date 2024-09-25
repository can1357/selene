#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V2.Encapsulation", encapsulation, 0x0, 0x20, true, 0x3940232a838c6eb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.IPv6Supported", i_pv6_supported, 0x20, 0x8, true, 0x294a8b353f435dfa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.IPv4Options", i_pv4_options, 0x28, 0x8, true, 0xd75fad5b8329b358)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.IPv6NonIPsecExtensionHeaders", i_pv6_non_i_psec_extension_headers, 0x30, 0x8, true, 0x8dbd3626ab59d32a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.Ah", ah, 0x38, 0x8, true, 0x52982c00352ce737)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.Esp", esp, 0x40, 0x8, true, 0x5ca597efb3fc66d6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.AhEspCombined", ah_esp_combined, 0x48, 0x8, true, 0xb435ac63cd8efc87)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.Transport", transport, 0x50, 0x8, true, 0xadba18bb91f1376e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.Tunnel", tunnel, 0x58, 0x8, true, 0x22318d978e3d9e17)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.TransportTunnelCombined", transport_tunnel_combined, 0x60, 0x8, true, 0x2dafdc1763286b8d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.LsoSupported", lso_supported, 0x68, 0x8, true, 0xdaa212bb5489c468)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IPSEC_OFFLOAD_V2.ExtendedSequenceNumbers", extended_sequence_numbers, 0x70, 0x8, true, 0x99198a5b17d0827e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V2.UdpEsp", udp_esp, 0x80, 0x20, true, 0x88fc88b898e8b34e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V2.AuthenticationAlgorithms", authentication_algorithms, 0xa0, 0x20, true, 0x8e2d7aedee1da711)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V2.EncryptionAlgorithms", encryption_algorithms, 0xc0, 0x20, true, 0x882bd9e7f18b8a6f)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IPSEC_OFFLOAD_V2.SaOffloadCapacity", sa_offload_capacity, 0xe0, 0x20, true, 0xdf9f2ffd60a3a67b)
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
#endif