#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ipv4_src_and_dest_address_wildcard_match_t), "_NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.IPv4SrcAndDestAddress", i_pv4_src_and_dest_address, 0x0, 0xc0, true, 0xe2c0843c76bf7059)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ipv6_src_and_dest_address_wildcard_match_t), "_NDIS_GFP_IP_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.IPv6SrcAndDestAddress", i_pv6_src_and_dest_address, 0x0, 0x80, true, 0xa8d8f29d8396c9d7)
#else
#define _m00
#define _m01
#endif