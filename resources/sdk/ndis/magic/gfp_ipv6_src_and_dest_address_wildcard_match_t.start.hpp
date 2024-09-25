#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ipv6_address_wildcard_match_t), "_NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.SourceIPv6Address", source_i_pv6_address, 0x0, 0xc0, true, 0x3cb6347ef0b20033)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ipv6_address_wildcard_match_t), "_NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.DestinationIPv6Address", destination_i_pv6_address, 0xc0, 0xc0, true, 0xd31d81f5f2ccf015)
#else
#define _m00
#define _m01
#endif