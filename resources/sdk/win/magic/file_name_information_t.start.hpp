#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NAME_INFORMATION.FileNameLength", file_name_length, 0x0, 0x20, true, 0x73c71fc6f023ca93)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_NAME_INFORMATION.FileName", file_name, 0x20, 0x10, true, 0x38b92d385803fd57)
#else
#define _m00
#define _m01
#endif