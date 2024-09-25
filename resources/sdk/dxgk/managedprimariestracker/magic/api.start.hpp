#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER$dxgkrnl.sys", 0x12b920, 0x0, true, 0xf8bb62b218190597)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0xb250, 0x0, true, 0xfa521cd905ebe35c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ$dxgkrnl.sys", 0x12c9b8, 0x0, true, 0xc6bc395bc8e9d78b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER$dxgkrnl.sys", 0x12c9e8, 0x0, true, 0x9e77b3fa2407b760)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER$dxgkrnl.sys", 0x12b9cc, 0x0, true, 0x912ffde8eff04e4f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER$dxgkrnl.sys", 0x12cf88, 0x0, true, 0x481571e76e307418)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif