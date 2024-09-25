#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_PROFILE_INFO.Header", header, 0x0, 0x20, true, 0x80247471181815c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.Flags", flags, 0x20, 0x20, true, 0xf6b8efa12c408c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gft_profile_type_t), "_NDIS_GFT_PROFILE_INFO.ProfileType", profile_type, 0x40, 0x20, true, 0x2702fa2c9f522c1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFT_PROFILE_INFO.TableType", table_type, 0x60, 0x20, true, 0xd07a313bc7e814f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.ProfileId", profile_id, 0x80, 0x20, true, 0xb2da7e8e786eaea8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.NumSupportedFlowEntries", num_supported_flow_entries, 0xa0, 0x20, true, 0xe1fdde29318d5721)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.NumCurrentFlowEntries", num_current_flow_entries, 0xc0, 0x20, true, 0x9186b84f5b96429f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.HeaderGroupArrayOffset", header_group_array_offset, 0xe0, 0x20, true, 0x90da1d23a8ff2010)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.HeaderGroupArrayNumElements", header_group_array_num_elements, 0x100, 0x20, true, 0xca36caa80a34a09)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_PROFILE_INFO.HeaderGroupArrayElementSize", header_group_array_element_size, 0x120, 0x20, true, 0xad79756dac048191)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif