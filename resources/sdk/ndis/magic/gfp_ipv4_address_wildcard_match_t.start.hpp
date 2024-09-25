#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_wildcard_match_type_t), "_NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH.MatchType", match_type, 0x0, 0x20, true, 0x1e3568c2a4c81c9c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in_addr_t), "_NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH.IPAddress", ip_address, 0x20, 0x20, true, 0xdc4874f98ddc01e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH.MatchValue.PrefixLength", prefix_length, 0x0, 0x20, true, 0xb3e5b652fa5b97cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH.MatchValue.RangeSize", range_size, 0x0, 0x20, true, 0x8ec557b7a9e0bea4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_match_value_t), "_NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH.MatchValue", match_value, 0x40, 0x20, true, 0x85346977812ee45e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif