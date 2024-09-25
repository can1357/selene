#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXT_FUNCTION_CONFIG.dwFlags", dw_flags, 0x0, 0x20, true, 0xdb42c555b41cb533)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXT_FUNCTION_CONFIG.dwReserved", dw_reserved, 0x20, 0x20, true, 0x8370cf7fa6505b58)
#else
#define _m00
#define _m01
#endif