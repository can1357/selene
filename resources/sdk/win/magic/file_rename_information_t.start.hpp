#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_RENAME_INFORMATION.ReplaceIfExists", replace_if_exists, 0x0, 0x8, true, 0x9a6b02706bb080f7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_RENAME_INFORMATION.Flags", flags, 0x0, 0x20, true, 0x3f649b345883d38c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_RENAME_INFORMATION.RootDirectory", root_directory, 0x40, 0x40, true, 0xb85d6e7849e28c44)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_RENAME_INFORMATION.FileNameLength", file_name_length, 0x80, 0x20, true, 0xb90679b2e7f2cee8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_RENAME_INFORMATION.FileName", file_name, 0xa0, 0x10, true, 0xeea16f4ee63ad7c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif