#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_SCRUB_INFORMATION.Handle", handle, 0x0, 0x40, true, 0xbfe17937b3025863)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_SCRUB_INFORMATION.PagesScrubbed", pages_scrubbed, 0x40, 0x40, true, 0xb987f7948b2576d)
#else
#define _m00
#define _m01
#endif