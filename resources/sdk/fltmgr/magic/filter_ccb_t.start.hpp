#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_FILTER_CCB.Filter", filter, 0x0, 0x40, true, 0x16ec6210c8b30b19)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILTER_CCB.Iterator", iterator, 0x40, 0x20, true, 0xe42988f1fb3a77ec)
#else
#define _m00
#define _m01
#endif