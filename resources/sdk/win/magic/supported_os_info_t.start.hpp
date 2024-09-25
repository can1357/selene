#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SUPPORTED_OS_INFO.MajorVersion", major_version, 0x0, 0x10, true, 0x507bccf3cc5211d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SUPPORTED_OS_INFO.MinorVersion", minor_version, 0x10, 0x10, true, 0xf53bf08c2852258e)
#else
#define _m00
#define _m01
#endif