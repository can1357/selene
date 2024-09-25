#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendMouseInput@Mouse@IVRootDeliver$win32kbase.sys", 0x1c2f14, 0x0, true, 0x3c3781864bd2fd77)
#else
#define _m0(...) __VA_ARGS__
#endif