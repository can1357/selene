#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_HOT_PATCH_REGISTRY_VALUE.ImageNameLength", image_name_length, 0x0, 0x10, true, 0x6b924615bd8b11ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_SYSTEM_HOT_PATCH_REGISTRY_VALUE.ImageName", image_name, 0x10, 0x10, true, 0x5275dbaa3aff7f2f)
#else
#define _m00
#define _m01
#endif