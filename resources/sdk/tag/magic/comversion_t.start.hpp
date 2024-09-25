#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOMVERSION.MajorVersion", major_version, 0x0, 0x10, true, 0xa592c66053cee3f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagCOMVERSION.MinorVersion", minor_version, 0x10, 0x10, true, 0xfdb81f29476b3c04)
#else
#define _m00
#define _m01
#endif