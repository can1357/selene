#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_11.Major", major, 0x0, 0x0, false, 0x4b7d6465e924da9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_11.Minor", minor, 0x0, 0x0, false, 0x71958d7e8416ffc9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_VERSION_V1_11.Build", build, 0x0, 0x0, false, 0xdb1a0d81b00c8715)
#else
#define _m00
#define _m01
#define _m02
#endif