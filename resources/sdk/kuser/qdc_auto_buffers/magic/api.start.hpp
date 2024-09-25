#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TryFillOnce@QDC_AUTO_BUFFERS$win32kbase.sys", 0x49d14, 0x0, true, 0x1897b664db0bf49e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Fill@QDC_AUTO_BUFFERS$win32kbase.sys", 0x49df4, 0x0, true, 0x60a70f9c672e4171)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Free@QDC_AUTO_BUFFERS$win32kbase.sys", 0x49dc8, 0x0, true, 0x41bd05b84587bac7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif