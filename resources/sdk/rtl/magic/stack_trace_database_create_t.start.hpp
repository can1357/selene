#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_STACK_TRACE_DATABASE_CREATE.CommitBase", commit_base, 0x0, 0x40, true, 0xc5270b5b4f1c95a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_STACK_TRACE_DATABASE_CREATE.CommitSize", commit_size, 0x40, 0x40, true, 0x35154377b065ecb8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_STACK_TRACE_DATABASE_CREATE.ReserveSize", reserve_size, 0x80, 0x40, true, 0xfeacbc09a0e2d9b)
#else
#define _m00
#define _m01
#define _m02
#endif