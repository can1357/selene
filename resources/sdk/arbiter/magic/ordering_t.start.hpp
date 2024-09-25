#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ORDERING.Start", start, 0x0, 0x40, true, 0x4e47ba069b48cfb8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARBITER_ORDERING.End", end, 0x40, 0x40, true, 0xfa6ffb2de1bfc33e)
#else
#define _m00
#define _m01
#endif