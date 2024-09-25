#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "xtime.sec", sec, 0x0, 0x0, false, 0x95e91b892ec4f978)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "xtime.nsec", nsec, 0x0, 0x0, false, 0x179a10ed8ec43b1e)
#else
#define _m00
#define _m01
#endif