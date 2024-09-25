#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z$win32kbase.sys", 0x0, 0x0, false, 0xcf99d63722647630)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z$win32kbase.sys", 0x303c0, 0x0, true, 0xf2dce0fbf878c358)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1HANDLELOCK@@QEAA@XZ$win32kbase.sys", 0x27cdc, 0x0, true, 0x205fdb64749c24e6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShareCount@HANDLELOCK$win32kbase.sys", 0x42960, 0x0, true, 0xc4db1a1e19f6e120)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bLockHobj@HANDLELOCK$win32kbase.sys", 0x42bb0, 0x0, true, 0xac7fc5fe80fc2157)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Pid@HANDLELOCK$win32kbase.sys", 0x1f1e8, 0x0, true, 0xf1098619f41017e8)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockHandle@HANDLELOCK$win32kbase.sys", 0x25170, 0x0, true, 0x58b71d14d17f1f8b)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@HANDLELOCK$win32kbase.sys", 0x24800, 0x0, true, 0x2bc0abdb96ffd65a)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlockAndRelease@HANDLELOCK$win32kbase.sys", 0x1d850, 0x0, true, 0x320cf869816be86e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif