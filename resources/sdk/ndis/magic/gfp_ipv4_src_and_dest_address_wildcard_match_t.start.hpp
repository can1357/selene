#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ipv4_address_wildcard_match_t), "_NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.SourceIPv4Address", source_i_pv4_address, 0x0, 0x60, true, 0xbd38cb07a058795b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_ipv4_address_wildcard_match_t), "_NDIS_GFP_IPV4_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH.DestinationIPv4Address", destination_i_pv4_address, 0x60, 0x60, true, 0x379074e2d7510a43)
#else
#define _m00
#define _m01
#endif