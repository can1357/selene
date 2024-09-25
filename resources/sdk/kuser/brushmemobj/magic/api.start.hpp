#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BRUSHMEMOBJ@@QEAA@KKHH@Z$win32kbase.sys", 0x42370, 0x0, true, 0x360482dc32d0aa41)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z$win32kbase.sys", 0x42000, 0x0, true, 0x35f53bafb493b83f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1BRUSHMEMOBJ@@QEAA@XZ$win32kfull.sys", 0x14d2b0, 0x0, true, 0xe2fa22dea7aabac6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$pbrAllocBrush@BRUSHMEMOBJ$win32kbase.sys", 0x42548, 0x0, true, 0xac216280de22303a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vGlobal@BRUSHMEMOBJ$win32kbase.sys", 0x8580c, 0x0, true, 0x96b2fa60a1cafa0d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif