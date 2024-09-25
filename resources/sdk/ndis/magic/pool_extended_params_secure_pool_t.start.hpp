#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POOL_EXTENDED_PARAMS_SECURE_POOL.SecurePoolHandle", secure_pool_handle, 0x0, 0x0, false, 0xac5d28b7f3b71674)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POOL_EXTENDED_PARAMS_SECURE_POOL.Buffer", buffer, 0x0, 0x0, false, 0xe17e71dcbc3396ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOL_EXTENDED_PARAMS_SECURE_POOL.Cookie", cookie, 0x0, 0x0, false, 0x178034d6b67d2a9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POOL_EXTENDED_PARAMS_SECURE_POOL.SecurePoolFlags", secure_pool_flags, 0x0, 0x0, false, 0x21f9b2515fd1bcb7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif