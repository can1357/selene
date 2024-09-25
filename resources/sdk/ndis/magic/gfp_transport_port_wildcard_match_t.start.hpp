#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH.MatchType", match_type, 0x0, 0x20, true, 0x5a72ac542a764204)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH.Port", port, 0x20, 0x10, true, 0x3c606688da3b0a26)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH.Range", range, 0x30, 0x10, true, 0xe483205ca94b10ce)
#else
#define _m00
#define _m01
#define _m02
#endif