#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_REPARSE_POINT_INFORMATION.FileReference", file_reference, 0x0, 0x40, true, 0x4d16716267475dd8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_REPARSE_POINT_INFORMATION.Tag", tag, 0x40, 0x20, true, 0x6a807d1efbcee131)
#else
#define _m00
#define _m01
#endif