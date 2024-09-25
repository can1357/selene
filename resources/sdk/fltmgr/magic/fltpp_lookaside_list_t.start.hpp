#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t*), "_FLTPP_LOOKASIDE_LIST.P", p, 0x0, 0x40, true, 0x235e00db589d2c40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t*), "_FLTPP_LOOKASIDE_LIST.L", l, 0x40, 0x40, true, 0x59a34fa6c2768da0)
#else
#define _m00
#define _m01
#endif