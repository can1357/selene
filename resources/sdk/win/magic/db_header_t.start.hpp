#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DB_HEADER.dwMajorVersion", dw_major_version, 0x0, 0x20, true, 0x7be025f23e2428b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DB_HEADER.dwMinorVersion", dw_minor_version, 0x20, 0x20, true, 0x1c52930bf91a520f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DB_HEADER.dwMagic", dw_magic, 0x40, 0x20, true, 0xf5483d41eb4d7908)
#else
#define _m00
#define _m01
#define _m02
#endif