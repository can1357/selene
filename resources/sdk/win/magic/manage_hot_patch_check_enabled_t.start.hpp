#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_CHECK_ENABLED.Version", version, 0x0, 0x0, false, 0x3aa55a763552579b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MANAGE_HOT_PATCH_CHECK_ENABLED.Flags", flags, 0x0, 0x0, false, 0xa918e0e5c6565d95)
#else
#define _m00
#define _m01
#endif