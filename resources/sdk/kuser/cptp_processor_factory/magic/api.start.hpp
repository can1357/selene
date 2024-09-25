#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddProcessor@CPTPProcessorFactory$win32kbase.sys", 0x1acf78, 0x0, true, 0xb767ecdf27ab42d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetProcessor@CPTPProcessorFactory$win32kbase.sys", 0x1adbb0, 0x0, true, 0x14606b5836467f24)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveProcessor@CPTPProcessorFactory$win32kbase.sys", 0x1aef04, 0x0, true, 0xc847f40283f08050)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif