#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_DELETE_SYMLINK_INPUT.NameOffset", name_offset, 0x0, 0x10, true, 0x6f1395c0977b8403)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_DELETE_SYMLINK_INPUT.NameLength", name_length, 0x10, 0x10, true, 0x488d15bece78d2ea)
#else
#define _m00
#define _m01
#endif