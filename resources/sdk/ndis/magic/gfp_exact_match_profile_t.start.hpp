#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.Header", header, 0x0, 0x20, true, 0xf22a206c81e78777)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.Flags", flags, 0x20, 0x20, true, 0xa187a46b089e734f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.TableType", table_type, 0x40, 0x20, true, 0xc2e5cb0826fc9397)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.ProfileId", profile_id, 0x60, 0x20, true, 0x7cd34d1deeeca0dd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.NumSupportedEntries", num_supported_entries, 0x80, 0x20, true, 0x28b4529e6d9ca7dd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.HeaderGroupExactMatchProfileArrayOffset", header_group_exact_match_profile_array_offset, 0xa0, 0x20, true, 0x7f8fc1cc95ccd640)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.HeaderGroupExactMatchProfileArrayNumElements", header_group_exact_match_profile_array_num_elements, 0xc0, 0x20, true, 0x902f97a46e0245ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_EXACT_MATCH_PROFILE.HeaderGroupExactMatchProfileArrayElementSize", header_group_exact_match_profile_array_element_size, 0xe0, 0x20, true, 0xd3c36be08a1639bf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif