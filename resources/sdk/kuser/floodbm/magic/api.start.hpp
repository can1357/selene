#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bExtendScanline@FLOODBM$win32kfull.sys", 0x2b8af4, 0x0, true, 0xbab53ea9c38d8dae)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bSearchAllSpans@FLOODBM$win32kfull.sys", 0x2b91dc, 0x0, true, 0x4f5c117edfe30b0f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$iColorGet@FLOODBM$win32kfull.sys", 0x2b940c, 0x0, true, 0xe834fa8d1103e0f9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vFindExtent@FLOODBM$win32kfull.sys", 0x2b94d4, 0x0, true, 0xdaa7883c39a61334)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif