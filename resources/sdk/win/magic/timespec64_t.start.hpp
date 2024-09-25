#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_timespec64.tv_sec", tv_sec, 0x0, 0x40, true, 0x2e87caefd7b8bd92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_timespec64.tv_nsec", tv_nsec, 0x40, 0x20, true, 0xe514682eb20e36f1)
#else
#define _m00
#define _m01
#endif