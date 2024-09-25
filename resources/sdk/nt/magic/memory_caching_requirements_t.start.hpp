#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_CACHING_REQUIREMENTS.BasePage", base_page, 0x0, 0x0, false, 0xbde26538c0740a34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_CACHING_REQUIREMENTS.PageCount", page_count, 0x0, 0x0, false, 0xf1194061678eb8bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::memory_caching_type_t), "_MEMORY_CACHING_REQUIREMENTS.MemoryCachingType", memory_caching_type, 0x0, 0x0, false, 0x9fd3571b9df07c3f)
#else
#define _m00
#define _m01
#define _m02
#endif