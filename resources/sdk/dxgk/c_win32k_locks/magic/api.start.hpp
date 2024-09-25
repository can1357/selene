#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hDestDc@CWin32kLocks$dxgkrnl.sys", 0x4576c, 0x0, true, 0xb18110844f1e577e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z$dxgkrnl.sys", 0x25028, 0x0, true, 0xf72e1d7ba2f9e609)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CWin32kLocks@@QEAA@XZ$dxgkrnl.sys", 0x25054, 0x0, true, 0xe4c0acb492928c82)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lock@CWin32kLocks$dxgkrnl.sys", 0x1b654, 0x0, true, 0xc3aecd6847ac532b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@CWin32kLocks$dxgkrnl.sys", 0x25078, 0x0, true, 0xba850bb1513cd98a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif