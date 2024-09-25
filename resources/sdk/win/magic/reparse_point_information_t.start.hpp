#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_POINT_INFORMATION.ReparseDataLength", reparse_data_length, 0x0, 0x10, true, 0x44defed50a7fc4d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_POINT_INFORMATION.UnparsedNameLength", unparsed_name_length, 0x10, 0x10, true, 0xac7af023e8344857)
#else
#define _m00
#define _m01
#endif