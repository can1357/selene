#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getDLT@DLT_ACTIVE$win32kbase.sys", 0xb8ee0, 0x0, true, 0xedffbee61031c294)
#else
#define _m0(...) __VA_ARGS__
#endif