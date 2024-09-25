#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bValid@SURFREF$win32kfull.sys", 0x26db68, 0x0, true, 0x7804887ae745c90b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SURFREF@@QEAA@PEAVSURFACE@@@Z$win32kfull.sys", 0x0, 0x0, false, 0x283d6b6e619d5d3a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SURFREF@@QEAA@PEAUHSURF__@@@Z$win32kfull.sys", 0x26dff4, 0x0, true, 0xa90995717b8256b0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@SURFREF$win32kfull.sys", 0x156908, 0x0, true, 0xe60a08e679969be9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vKeepIt@SURFREF$win32kfull.sys", 0x273e60, 0x0, true, 0xa26dd97fb715ed91)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDeleteSurface@SURFREF$win32kfull.sys", 0x1570a0, 0x0, true, 0xe47736a8365e03d1)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SURFREF@@QEAA@XZ$win32kfull.sys", 0x156908, 0x0, true, 0xf897d922c155f442)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif