#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bTouchInputAllowed@RawInputManagerObject$win32kbase.sys", 0x2576ac, 0x0, true, 0xdab2ccb00fe82030)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$gHidRequestTable@RawInputManagerObject$win32kbase.sys", 0x25b380, 0x0, true, 0x574bd90ba1a217ce)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif