#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSize@ConnectionTargetInfo@CoreMessagingK$win32kbase.sys", 0xc8c20, 0x0, true, 0xf98708da74d08dc8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@ConnectionTargetInfo@CoreMessagingK$win32kbase.sys", 0x8d1e0, 0x0, true, 0x9349b30da28a5436)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDelete@ConnectionTargetInfo@CoreMessagingK$win32kbase.sys", 0xab370, 0x0, true, 0x7b77d3e0b4d3ef93)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_Vtbl@ConnectionTargetInfo@CoreMessagingK$win32kbase.sys", 0x20b1a8, 0x0, true, 0xad6863b80eba9cd3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif