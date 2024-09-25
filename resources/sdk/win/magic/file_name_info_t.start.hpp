#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NAME_INFO.FileNameLength", file_name_length, 0x0, 0x20, true, 0xeec37a06f018bdf0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_NAME_INFO.FileName", file_name, 0x20, 0x10, true, 0xe5ee9cf22a0edfcd)
#else
#define _m00
#define _m01
#endif