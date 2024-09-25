#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.DirectoryCount", directory_count, 0x0, 0x40, true, 0xca50f9f40ebcbf22)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.FileCount", file_count, 0x40, 0x40, true, 0x78642cf45b32be81)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.FsFormatMajVersion", fs_format_maj_version, 0x80, 0x10, true, 0x39e4549d201673f6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.FsFormatMinVersion", fs_format_min_version, 0x90, 0x10, true, 0x359b84a9d535b0a7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.FsFormatName", fs_format_name, 0xa0, 0xc0, true, 0x31fad44db9b946f0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.FormatTime", format_time, 0x180, 0x40, true, 0x3ffe77f360bf75aa)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.LastUpdateTime", last_update_time, 0x1c0, 0x40, true, 0xc6fab241c5530275)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 34>), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.CopyrightInfo", copyright_info, 0x200, 0x20, true, 0xc89529f33d38249c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 34>), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.AbstractInfo", abstract_info, 0x420, 0x20, true, 0xcea134a70df0c09c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 34>), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.FormattingImplementationInfo", formatting_implementation_info, 0x640, 0x20, true, 0x70856eddade0e2e1)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 34>), "_FILE_QUERY_ON_DISK_VOL_INFO_BUFFER.LastModifyingImplementationInfo", last_modifying_implementation_info, 0x860, 0x20, true, 0xc6f862b5f7f02dd2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif