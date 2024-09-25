#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.Header", header, 0x0, 0x20, true, 0xf89733955346bdab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.Flags", flags, 0x20, 0x20, true, 0x5135254963249a18)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::gfp_table_type_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.TableType", table_type, 0x40, 0x20, true, 0xf1fab91818155d4a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.ProfileId", profile_id, 0x60, 0x20, true, 0xa661de061932547b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.Type", type, 0x80, 0x20, true, 0x9fa37b682adaf38e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.Length", length, 0xa0, 0x20, true, 0x853a3aa30de13fc3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.Alignment", alignment, 0xc0, 0x40, true, 0x4f41dac517344cd0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_GFT_CUSTOM_ACTION_PROFILE.ActionProfileData", action_profile_data, 0xc0, 0x8, true, 0xbafa9e0f1d287dce)
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