#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocUninitialized@BufferCache@CoreMessagingK$win32kbase.sys", 0x69c30, 0x0, true, 0xf4a639cc8a650297)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Free@BufferCache@CoreMessagingK$win32kbase.sys", 0x69b8c, 0x0, true, 0x23dc00f2c8ea73e8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Remove@BufferCache@CoreMessagingK$win32kbase.sys", 0x69cf8, 0x0, true, 0x509f2b3ecd943d1b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_FreeList@BufferCache@CoreMessagingK$win32kbase.sys", 0x257e68, 0x0, true, 0xa6bffed88194136e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif