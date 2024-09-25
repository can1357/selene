#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_float_const._Word", word, 0x0, 0x40, true, 0x3b1d34b0d3a593e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "_float_const._Float", _float, 0x0, 0x20, true, 0xe10d30ab564b3c3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_float_const._Double", _double, 0x0, 0x40, true, 0xc664d124ec6f8814)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_float_const._Long_double", long_double, 0x0, 0x40, true, 0x5c5b6968733c6190)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif