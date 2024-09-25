#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXT_CONFIG.dwFlags", dw_flags, 0x0, 0x20, true, 0xaf2c11d0df4a395c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXT_CONFIG.dwReserved", dw_reserved, 0x20, 0x20, true, 0x9fa58a046e3d4477)
#else
#define _m00
#define _m01
#endif