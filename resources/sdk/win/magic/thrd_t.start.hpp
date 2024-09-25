#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_Thrd_t._Hnd", hnd, 0x0, 0x0, false, 0x495a3bf609de1eed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_Thrd_t._Id", id, 0x0, 0x0, false, 0xc05abc9ee34dec3f)
#else
#define _m00
#define _m01
#endif