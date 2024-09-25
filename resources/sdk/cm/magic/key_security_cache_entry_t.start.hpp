#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_SECURITY_CACHE_ENTRY.Cell", cell, 0x0, 0x20, true, 0x967e6c2395b64a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_security_cache_t*), "_CM_KEY_SECURITY_CACHE_ENTRY.CachedSecurity", cached_security, 0x40, 0x40, true, 0x614c75e0eaf65782)
#else
#define _m00
#define _m01
#endif