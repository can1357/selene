#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_FILE_IO.FileObject", file_object, 0x0, 0x40, true, 0x8f4a9b8256a99421)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_FILE_IO.FileName", file_name, 0x40, 0x10, true, 0x7b0eefc0adbbbb27)
#else
#define _m00
#define _m01
#endif