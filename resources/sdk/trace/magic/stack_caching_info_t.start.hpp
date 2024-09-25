#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_STACK_CACHING_INFO.Enabled", enabled, 0x0, 0x0, false, 0x9f9fd4775f5cd734)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_STACK_CACHING_INFO.CacheSize", cache_size, 0x0, 0x0, false, 0x17160fef0fc0ef57)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_STACK_CACHING_INFO.BucketCount", bucket_count, 0x0, 0x0, false, 0xb0348f80d138edf5)
#else
#define _m00
#define _m01
#define _m02
#endif