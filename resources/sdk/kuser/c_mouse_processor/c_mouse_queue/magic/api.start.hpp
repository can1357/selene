#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Dequeue@CMouseQueue@CMouseProcessor$win32kbase.sys", 0x63ce4, 0x0, true, 0xf8b5af3c8717cc26)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetItemForWrite@CMouseQueue@CMouseProcessor$win32kbase.sys", 0x63600, 0x0, true, 0x5e3ac3891fe02fa4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif