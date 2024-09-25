#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_QUERY_PATCHES.Version", version, 0x0, 0x20, true, 0xf870370c2fbc33f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_MANAGE_HOT_PATCH_QUERY_PATCHES.UserSid.Sid", sid, 0x0, 0x60, true, 0x3f45ef3022606921)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 68>), "_MANAGE_HOT_PATCH_QUERY_PATCHES.UserSid.Buffer", buffer, 0x0, 0x20, true, 0x367c294f91c68d32)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_user_sid_t), "_MANAGE_HOT_PATCH_QUERY_PATCHES.UserSid", user_sid, 0x20, 0x20, true, 0xf2b6051e01282b87)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_QUERY_PATCHES.PatchCount", patch_count, 0x240, 0x20, true, 0xc7c8bd30bcb10c1d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_MANAGE_HOT_PATCH_QUERY_PATCHES.PatchPathStrings", patch_path_strings, 0x280, 0x40, true, 0xad910ac1ac3f854)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hot_patch_image_info_t*), "_MANAGE_HOT_PATCH_QUERY_PATCHES.BaseInfos", base_infos, 0x2c0, 0x40, true, 0xbed439c9b712e7bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif