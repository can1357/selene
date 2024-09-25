#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "KSTIME.Time", time, 0x0, 0x0, false, 0xc83d93dbcdaabdd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSTIME.Numerator", numerator, 0x0, 0x0, false, 0xbcfaf404a08195f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSTIME.Denominator", denominator, 0x0, 0x0, false, 0x173f08993065b7f8)
#else
#define _m00
#define _m01
#define _m02
#endif