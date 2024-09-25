#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "PendingCallListHead.pv1", pv1, 0x0, 0x40, true, 0xaf88c7d0e943d9c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "PendingCallListHead.pv2", pv2, 0x40, 0x40, true, 0x7c5b687c6575bb37)
#else
#define _m00
#define _m01
#endif