#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.Header", header, 0x0, 0x20, true, 0x2c8d524b1927023b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.Flags", flags, 0x20, 0x20, true, 0x2d0f76bb952d4c8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.HeadersPresent", headers_present, 0x40, 0x20, true, 0xf082da9aa87bbae9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.MatchFields", match_fields, 0x80, 0x40, true, 0xaeb91b5877f7b7cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.SourceIPv4AddressMatchType", source_i_pv4_address_match_type, 0xc0, 0x20, true, 0x79074d6d22aa4883)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.DestinationIPv4AddressMatchType", destination_i_pv4_address_match_type, 0xe0, 0x20, true, 0x894173d212cc010b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.SourceIPv6AddressMatchType", source_i_pv6_address_match_type, 0x100, 0x20, true, 0xaddd7b51f6e35da7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.DestinationIPv6AddressMatchType", destination_i_pv6_address_match_type, 0x120, 0x20, true, 0xbd8949310c5c1d12)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.SourcePortMatchType", source_port_match_type, 0x140, 0x20, true, 0xad46b5f0691d1a84)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.DestinationPortMatchType", destination_port_match_type, 0x160, 0x20, true, 0x714078c251b54f5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE.TcpFlags", tcp_flags, 0x180, 0x8, true, 0x193bdd3d8a3a17f7)
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
#endif