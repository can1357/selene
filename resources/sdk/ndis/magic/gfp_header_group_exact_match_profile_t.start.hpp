#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE.Header", header, 0x0, 0x20, true, 0x353701a98cee3ef6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE.Flags", flags, 0x20, 0x20, true, 0xbdb9af3dedcc538c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE.HeadersPresent", headers_present, 0x40, 0x20, true, 0x9a15b744a743f32c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE.MatchFields", match_fields, 0x80, 0x40, true, 0x56836a2ba04ecb2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif