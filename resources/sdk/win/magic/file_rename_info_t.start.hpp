#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_RENAME_INFO.ReplaceIfExists", replace_if_exists, 0x0, 0x8, true, 0x22706ad9ff25a32c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_RENAME_INFO.Flags", flags, 0x0, 0x20, true, 0xd9aa06e97cd54a2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FILE_RENAME_INFO.RootDirectory", root_directory, 0x40, 0x40, true, 0x40ce7a2380b55d1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_RENAME_INFO.FileNameLength", file_name_length, 0x80, 0x20, true, 0x8dc09c9154b0c95c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_RENAME_INFO.FileName", file_name, 0xa0, 0x10, true, 0xfaa0ca23b2594087)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif