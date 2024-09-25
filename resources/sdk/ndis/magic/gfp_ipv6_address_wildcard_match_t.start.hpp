#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.MatchType", match_type, 0x0, 0x20, true, 0x5dea291e8577adb7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in6_addr_t), "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.IPAddress", ip_address, 0x20, 0x80, true, 0xa8cd3dc67911bd83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.MatchValue.PrefixLength", prefix_length, 0x0, 0x20, true, 0xd6926b7a9984c500)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.MatchValue.RangeSize", range_size, 0x0, 0x20, true, 0x39ce53d66334dd25)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_match_value_t), "_NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH.MatchValue", match_value, 0xa0, 0x20, true, 0x2933459f11451116)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif