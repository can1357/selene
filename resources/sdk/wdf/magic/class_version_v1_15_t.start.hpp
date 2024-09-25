#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_15.Major", major, 0x0, 0x0, false, 0x480ad1e719d5ff7d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_15.Minor", minor, 0x0, 0x0, false, 0xa69bba0cd910362e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_15.Build", build, 0x0, 0x0, false, 0xbab0cf50769586d1)
#else
#define _m00
#define _m01
#define _m02
#endif