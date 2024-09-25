#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IPV4_HEADER.VersionAndHeaderLength", version_and_header_length, 0x0, 0x8, true, 0x43516ca4daee01f7)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IPV4_HEADER.HeaderLength", header_length, 0x0, 0x4, true, 0xab68554eb1e0a70d, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_IPV4_HEADER.Version", version, 0x4, 0x4, true, 0xe390a7a0fcb24588, 4, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IPV4_HEADER.TypeOfServiceAndEcnField", type_of_service_and_ecn_field, 0x8, 0x8, true, 0x616a2ff248567769)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_IPV4_HEADER.EcnField", ecn_field, 0x8, 0x2, true, 0xa8580f3a222d6178, 2, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_IPV4_HEADER.TypeOfService", type_of_service, 0xa, 0x6, true, 0xc1cc46f356921ca8, 6, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IPV4_HEADER.TotalLength", total_length, 0x10, 0x10, true, 0xebd5017b7128e0de)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IPV4_HEADER.Identification", identification, 0x20, 0x10, true, 0x58e9f407841c61ee)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IPV4_HEADER.FlagsAndOffset", flags_and_offset, 0x30, 0x10, true, 0x4b1270273a84543a)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_IPV4_HEADER.DontUse1", dont_use1, 0x30, 0x5, true, 0x42cd0043edbbf61c, 5, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IPV4_HEADER.MoreFragments", more_fragments, 0x35, 0x1, true, 0xdf01d27012592a23, 1, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IPV4_HEADER.DontFragment", dont_fragment, 0x36, 0x1, true, 0x53ee45681405a3e4, 1, uint16_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_IPV4_HEADER.DontUse2", dont_use2, 0x38, 0x8, true, 0xfa3cf92d8676bd8f, 8, uint16_t)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IPV4_HEADER.TimeToLive", time_to_live, 0x40, 0x8, true, 0x717ce69dcc55b8d8)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IPV4_HEADER.Protocol", protocol, 0x48, 0x8, true, 0x791a2c116e20cf7b)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IPV4_HEADER.HeaderChecksum", header_checksum, 0x50, 0x10, true, 0x8b281416d13b4fb8)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_IPV4_HEADER.SourceAddress", source_address, 0x60, 0x20, true, 0x6bf4a60c6838b31d)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_IPV4_HEADER.DestinationAddress", destination_address, 0x80, 0x20, true, 0x1e2347a82f1f1e13)
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
#endif