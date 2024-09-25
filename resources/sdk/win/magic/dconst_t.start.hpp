#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "_Dconst._Word", word, 0x0, 0x0, false, 0xe891722846aeae01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "_Dconst._Float", _float, 0x0, 0x0, false, 0x704a9d22bc322503)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_Dconst._Double", _double, 0x0, 0x0, false, 0xec373965dd67f09b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_Dconst._Long_double", long_double, 0x0, 0x0, false, 0x15925c32ea6b13)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif