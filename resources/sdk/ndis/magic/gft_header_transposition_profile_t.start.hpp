#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.Header", header, 0x0, 0x20, true, 0x9c8112378dab3ecd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.Flags", flags, 0x20, 0x20, true, 0x546a0b0a0d36abc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.TableType", table_type, 0x40, 0x20, true, 0x59273bb53902319d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.ProfileId", profile_id, 0x60, 0x20, true, 0xba845e424df0cc16)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.HeaderGroupTranspositionProfileArrayOffset", header_group_transposition_profile_array_offset, 0x80, 0x20, true, 0xd4f69890ba6cef89)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.HeaderGroupTranspositionProfileArrayNumElements", header_group_transposition_profile_array_num_elements, 0xa0, 0x20, true, 0xe4b998e31639da5b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.HeaderGroupTranspositionProfileArrayElementSize", header_group_transposition_profile_array_element_size, 0xc0, 0x20, true, 0x7ba739dbb043cb70)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.CustomActionProfileOffset", custom_action_profile_offset, 0xe0, 0x20, true, 0x76731d1d744d6017)
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