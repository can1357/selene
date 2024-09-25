#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_PROFILE_INFO_ARRAY.Header", header, 0x0, 0x20, true, 0x515da87d9f0509d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO_ARRAY.Flags", flags, 0x20, 0x20, true, 0x32c3ecc525852285)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO_ARRAY.ProfileInfoArrayOffset", profile_info_array_offset, 0x40, 0x20, true, 0x12bee085f886f186)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO_ARRAY.ProfileInfoArrayNumElements", profile_info_array_num_elements, 0x60, 0x20, true, 0xd43d79e4a3db9db8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO_ARRAY.ProfileInfoArrayElementSize", profile_info_array_element_size, 0x80, 0x20, true, 0xa6a0dd6303d1f2f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif