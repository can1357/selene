#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.Header", header, 0x0, 0x20, true, 0x40890cb63e949fc3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.Flags", flags, 0x20, 0x20, true, 0xb50ed903685d3bc7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.TableType", table_type, 0x40, 0x20, true, 0xa96febddab1c1e2b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.ProfileId", profile_id, 0x60, 0x20, true, 0x4d6ecbd1410f6daf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.NumSupportedEntries", num_supported_entries, 0x80, 0x20, true, 0x47e6257bda42df86)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.HeaderGroupWildcardMatchProfileArrayOffset", header_group_wildcard_match_profile_array_offset, 0xa0, 0x20, true, 0xc7882b26cd42616d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.HeaderGroupWildcardMatchProfileArrayNumElements", header_group_wildcard_match_profile_array_num_elements, 0xc0, 0x20, true, 0x49257931d4f4a134)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFP_WILDCARD_MATCH_PROFILE.HeaderGroupWildcardMatchProfileArrayElementSize", header_group_wildcard_match_profile_array_element_size, 0xe0, 0x20, true, 0x579e86aab32d3645)
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