#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_STACK_CACHING_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x8c5f83a709d02763)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_STACK_CACHING_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0x6afb105767b023c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_STACK_CACHING_INFORMATION.Enabled", enabled, 0x80, 0x8, true, 0x3344d2648a3c9840)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_STACK_CACHING_INFORMATION.CacheSize", cache_size, 0xa0, 0x20, true, 0x8c1a7075d724c3c3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_STACK_CACHING_INFORMATION.BucketCount", bucket_count, 0xc0, 0x20, true, 0x9a73e66e427bb1d2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif