#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_BLOCK.Magic", magic, 0x0, 0x20, true, 0x98e38d53ffc4557f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_BLOCK.Count", count, 0x20, 0x20, true, 0x790ea9f55b613ca3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_BLOCK.Size", size, 0x40, 0x20, true, 0x67c10d10631b79f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_BLOCK.UserCount", user_count, 0x80, 0x40, true, 0xc9ce72c8bd454ca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_BLOCK.UserSize", user_size, 0xc0, 0x40, true, 0x60fb0c8f01972bbc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_TRACE_BLOCK.UserContext", user_context, 0x100, 0x40, true, 0xb5c954f17f98623b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_block_t*), "_RTL_TRACE_BLOCK.Next", next, 0x140, 0x40, true, 0xf62ecd0da0725219)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_RTL_TRACE_BLOCK.Trace", trace, 0x180, 0x40, true, 0x47108f8aa7431cdd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif