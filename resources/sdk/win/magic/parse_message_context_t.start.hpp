#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARSE_MESSAGE_CONTEXT.fFlags", f_flags, 0x0, 0x20, true, 0x83623d7529f00982)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARSE_MESSAGE_CONTEXT.cwSavColumn", cw_sav_column, 0x20, 0x20, true, 0x46775f20f9402313)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PARSE_MESSAGE_CONTEXT.iwSrc", iw_src, 0x40, 0x40, true, 0xfc5b697078dd7259)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PARSE_MESSAGE_CONTEXT.iwDst", iw_dst, 0x80, 0x40, true, 0x52cce22edba6b47e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PARSE_MESSAGE_CONTEXT.iwDstSpace", iw_dst_space, 0xc0, 0x40, true, 0xc60670f4bab7b7d8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_PARSE_MESSAGE_CONTEXT.lpvArgStart", lpv_arg_start, 0x100, 0x40, true, 0x1453e98627f3a77a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif