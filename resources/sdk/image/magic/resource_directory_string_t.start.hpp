#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIRECTORY_STRING.Length", length, 0x0, 0x10, true, 0x8ec0088882836693)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_IMAGE_RESOURCE_DIRECTORY_STRING.NameString", name_string, 0x10, 0x8, true, 0xa12de910e9befbea)
#else
#define _m00
#define _m01
#endif