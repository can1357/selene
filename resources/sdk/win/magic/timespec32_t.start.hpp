#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_timespec32.tv_sec", tv_sec, 0x0, 0x0, false, 0x69a48adf292685d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_timespec32.tv_nsec", tv_nsec, 0x0, 0x0, false, 0xa415c31c6ad9963c)
#else
#define _m00
#define _m01
#endif