#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_ldouble_val._Sh", sh, 0x0, 0x40, true, 0x3c2ae17d9b386785)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_ldouble_val._Val", val, 0x0, 0x40, true, 0x1c393d306b74ada9)
#else
#define _m00
#define _m01
#endif