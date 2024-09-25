#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_17.Major", major, 0x0, 0x0, false, 0x1fb9a611f5b72755)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_17.Minor", minor, 0x0, 0x0, false, 0xd126e3495de26de0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_17.Build", build, 0x0, 0x0, false, 0xed254001d8b98368)
#else
#define _m00
#define _m01
#define _m02
#endif