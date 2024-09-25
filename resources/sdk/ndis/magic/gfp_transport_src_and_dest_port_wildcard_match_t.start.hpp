#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_transport_port_wildcard_match_t), "_NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH.SourcePort", source_port, 0x0, 0x40, true, 0x83fc160728c5d4c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gfp_transport_port_wildcard_match_t), "_NDIS_GFP_TRANSPORT_SRC_AND_DEST_PORT_WILDCARD_MATCH.DestinationPort", destination_port, 0x40, 0x40, true, 0xdd6b2483e5b23f9)
#else
#define _m00
#define _m01
#endif