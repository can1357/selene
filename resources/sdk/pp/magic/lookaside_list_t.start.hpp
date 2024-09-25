#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::general_lookaside_t*), "_PP_LOOKASIDE_LIST.P", p, 0x0, 0x40, true, 0x3d410c2f945dbe65)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::general_lookaside_t*), "_PP_LOOKASIDE_LIST.L", l, 0x40, 0x40, true, 0x5425d64f205dac80)
#else
#define _m00
#define _m01
#endif