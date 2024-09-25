#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "timespec.tv_sec", tv_sec, 0x0, 0x40, true, 0xa08cb57d73b0b670)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "timespec.tv_nsec", tv_nsec, 0x40, 0x20, true, 0x8534685e151f6967)
#else
#define _m00
#define _m01
#endif