#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASSEMBLY_FILE_DETAILED_INFORMATION.ulFlags", ul_flags, 0x0, 0x20, true, 0xa594bf528f8ef565)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASSEMBLY_FILE_DETAILED_INFORMATION.ulFilenameLength", ul_filename_length, 0x20, 0x20, true, 0x1ae64ed001b2e735)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASSEMBLY_FILE_DETAILED_INFORMATION.ulPathLength", ul_path_length, 0x40, 0x20, true, 0x43fc9ebc4b3a2f7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ASSEMBLY_FILE_DETAILED_INFORMATION.lpFileName", lp_file_name, 0x80, 0x40, true, 0x4c0a84044ef7169)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ASSEMBLY_FILE_DETAILED_INFORMATION.lpFilePath", lp_file_path, 0xc0, 0x40, true, 0x792d0f9803e10cc4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif