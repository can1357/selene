#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_DATA.BugCheckDataSize", bug_check_data_size, 0x0, 0x20, true, 0xf396819ff9ed07fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_DATA.BugCheckCode", bug_check_code, 0x20, 0x20, true, 0xf62ef5d1df9debb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_DATA.Parameter1", parameter1, 0x40, 0x40, true, 0x8f9307a44a3bfc4e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_DATA.Parameter2", parameter2, 0x80, 0x40, true, 0x9fdb3ae26ef5b694)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_DATA.Parameter3", parameter3, 0xc0, 0x40, true, 0x6c1033031c906d5b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_DATA.Parameter4", parameter4, 0x100, 0x40, true, 0xa34c95d77fd73cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif