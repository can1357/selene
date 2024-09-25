#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_UNLOAD_PATCH.Version", version, 0x0, 0x20, true, 0x83f1d0d3ec9a5199)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hot_patch_image_info_t), "_MANAGE_HOT_PATCH_UNLOAD_PATCH.BaseInfo", base_info, 0x20, 0x40, true, 0x5c05516cb8ab2806)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_MANAGE_HOT_PATCH_UNLOAD_PATCH.UserSid.Sid", sid, 0x0, 0x60, true, 0xe0903a2bdbc1cf2d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 68>), "_MANAGE_HOT_PATCH_UNLOAD_PATCH.UserSid.Buffer", buffer, 0x0, 0x20, true, 0x7bd9ddb389749dc6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_user_sid_t), "_MANAGE_HOT_PATCH_UNLOAD_PATCH.UserSid", user_sid, 0x60, 0x20, true, 0x8c516b2910c71556)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif