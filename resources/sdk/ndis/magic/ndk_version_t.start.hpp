#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDK_VERSION.Major", major, 0x0, 0x10, true, 0x12afbe951b6a2ee9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NDK_VERSION.Minor", minor, 0x10, 0x10, true, 0x65cc9c62f6519ee8)
#else
#define _m00
#define _m01
#endif