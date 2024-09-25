#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_ATTRIBUTE_INFORMATION.FileSystemAttributes", file_system_attributes, 0x0, 0x20, true, 0x712761ccd87419cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FILE_FS_ATTRIBUTE_INFORMATION.MaximumComponentNameLength", maximum_component_name_length, 0x20, 0x20, true, 0x79a0155a9dc2aca9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_ATTRIBUTE_INFORMATION.FileSystemNameLength", file_system_name_length, 0x40, 0x20, true, 0x7347f47e3adba151)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_FS_ATTRIBUTE_INFORMATION.FileSystemName", file_system_name, 0x60, 0x10, true, 0xfb0d5a493428a372)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif