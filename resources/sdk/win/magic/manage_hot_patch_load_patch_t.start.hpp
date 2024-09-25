#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_LOAD_PATCH.Version", version, 0x0, 0x20, true, 0x7969ca9a0e110aa0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MANAGE_HOT_PATCH_LOAD_PATCH.PatchPath", patch_path, 0x40, 0x80, true, 0xb4b192fb860e3b87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_MANAGE_HOT_PATCH_LOAD_PATCH.UserSid.Sid", sid, 0x0, 0x60, true, 0x9abf9c39311fb89b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 68>), "_MANAGE_HOT_PATCH_LOAD_PATCH.UserSid.Buffer", buffer, 0x0, 0x20, true, 0xcf420fdf43a66a6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_user_sid_t), "_MANAGE_HOT_PATCH_LOAD_PATCH.UserSid", user_sid, 0xc0, 0x20, true, 0x5dccd9d51a87feb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hot_patch_image_info_t), "_MANAGE_HOT_PATCH_LOAD_PATCH.BaseInfo", base_info, 0x2e0, 0x40, true, 0x994ae444131e148d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif