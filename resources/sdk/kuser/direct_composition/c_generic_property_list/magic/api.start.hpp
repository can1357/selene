#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureSpace@CGenericPropertyList@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x59bc99622ac10c27)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$push_back@CGenericPropertyList@DirectComposition$win32kbase.sys", 0x1dcb5c, 0x0, true, 0x3f8d2db8b6a090db)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif