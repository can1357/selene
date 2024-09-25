#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WNF_CI_BLOCKED_DRIVER_CONTEXT.Guid", guid, 0x0, 0x80, true, 0x94bd48f0d514502c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WNF_CI_BLOCKED_DRIVER_CONTEXT.ImagePathLength", image_path_length, 0x80, 0x10, true, 0xcabb1f57d8bcabeb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WNF_CI_BLOCKED_DRIVER_CONTEXT.ImagePath", image_path, 0x90, 0x10, true, 0xb4e85e50f72e812e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_CI_BLOCKED_DRIVER_CONTEXT.Policy", policy, 0x0, 0x0, false, 0x5b836f9bed2ff502)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif