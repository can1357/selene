#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bCopy@RGNOBJAPI$win32kbase.sys", 0x8bf70, 0x0, true, 0x6b7ce58716845269)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDeleteHandle@RGNOBJAPI$win32kbase.sys", 0x175ac, 0x0, true, 0x20c9cfc2b909e051)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDeleteRGNOBJAPI@RGNOBJAPI$win32kbase.sys", 0x178b0, 0x0, true, 0x14620fdff553b13e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bSubtract@RGNOBJAPI$win32kfull.sys", 0x44fb4, 0x0, true, 0xdbcce88eee7b1b46)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bSwap@RGNOBJAPI$win32kbase.sys", 0x2f160, 0x0, true, 0x148c1d1c99eae7e4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z$win32kbase.sys", 0x21680, 0x0, true, 0x343138ade9c30983)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RGNOBJAPI@@QEAA@XZ$win32kfull.sys", 0x44f7c, 0x0, true, 0x62e527e6b1a05985)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$iCombine@RGNOBJAPI$win32kbase.sys", 0x30860, 0x0, true, 0x8db7451cb2c5c63c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif