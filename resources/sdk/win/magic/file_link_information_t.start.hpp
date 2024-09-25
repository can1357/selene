#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_LINK_INFORMATION.ReplaceIfExists", replace_if_exists, 0x0, 0x8, true, 0x1aa8ee64335290fd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_LINK_INFORMATION.RootDirectory", root_directory, 0x40, 0x40, true, 0x7b3905511e8955)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINK_INFORMATION.FileNameLength", file_name_length, 0x80, 0x20, true, 0xd167116fd98c3643)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_LINK_INFORMATION.FileName", file_name, 0xa0, 0x10, true, 0xe05aa1619e725015)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINK_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xed6b23e1542e66a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif