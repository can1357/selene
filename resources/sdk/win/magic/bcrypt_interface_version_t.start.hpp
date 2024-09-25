#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_BCRYPT_INTERFACE_VERSION.MajorVersion", major_version, 0x0, 0x10, true, 0x2eeb95f7fb95d15b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_BCRYPT_INTERFACE_VERSION.MinorVersion", minor_version, 0x10, 0x10, true, 0xdb6b3ea60d81f776)
#else
#define _m00
#define _m01
#endif