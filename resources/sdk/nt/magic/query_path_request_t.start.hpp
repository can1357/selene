#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_PATH_REQUEST.PathNameLength", path_name_length, 0x0, 0x20, true, 0x550c1e347f83303e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::security_context_t*), "_QUERY_PATH_REQUEST.SecurityContext", security_context, 0x40, 0x40, true, 0xb5272712b2a9568)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_QUERY_PATH_REQUEST.FilePathName", file_path_name, 0x80, 0x10, true, 0xa472374beab129eb)
#else
#define _m00
#define _m01
#define _m02
#endif