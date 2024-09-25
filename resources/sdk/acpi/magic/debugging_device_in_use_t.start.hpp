#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_DEBUGGING_DEVICE_IN_USE.NameSpacePathLength", name_space_path_length, 0x0, 0x20, true, 0xe71effee1d521ac8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_ACPI_DEBUGGING_DEVICE_IN_USE.NameSpacePath", name_space_path, 0x20, 0x10, true, 0x3a85f242eff8e360)
#else
#define _m00
#define _m01
#endif