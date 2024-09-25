#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::memory_stream_param_t), "COMPAT_CACHE_FLAGS.Header", header, 0x0, 0x40, true, 0x9f14124a79069d49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COMPAT_CACHE_FLAGS.Value", value, 0x40, 0x20, true, 0x7c029ab2d4b8f61e)
#else
#define _m00
#define _m01
#endif