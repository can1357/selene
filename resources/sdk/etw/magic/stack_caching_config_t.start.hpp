#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_STACK_CACHING_CONFIG.CacheSize", cache_size, 0x0, 0x20, true, 0x13b77d70b10a5c20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_STACK_CACHING_CONFIG.BucketCount", bucket_count, 0x20, 0x20, true, 0x6b5d43d74f7baf6d)
#else
#define _m00
#define _m01
#endif