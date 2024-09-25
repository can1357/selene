#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Close@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x0, 0x0, false, 0xaf64d2405e9689d1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyCoreState@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x0, 0x0, false, 0xdac5f064d7a4d621)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x0, 0x0, false, 0x937c3e8e50b13cd1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddReference@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x44a38, 0x0, true, 0x1c4898bf310705ad)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z$dxgkrnl.sys", 0x460d4, 0x0, true, 0xc7aa5a3706fc5088)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROTECTEDSESSION@@QEAA@XZ$dxgkrnl.sys", 0x46188, 0x0, true, 0x3d72fa8703b8a8b2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyProtectedSession@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x282de0, 0x0, true, 0x981f9e3b259abd17)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x282ec0, 0x0, true, 0xba6b40757d600d97)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x283070, 0x0, true, 0x263a945f26c26fa9)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueueSignal@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x2830e0, 0x0, true, 0x9ca6cb69eacb99f4)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetSessionStatus@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x462f0, 0x0, true, 0x444e2b091cf996f1)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalFence@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x2831dc, 0x0, true, 0x33eb3061c4681f86)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x283270, 0x0, true, 0xfed286211e5051fb)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Stop@DXGPROTECTEDSESSION$dxgkrnl.sys", 0x283330, 0x0, true, 0xfaf62c43c96f79d8)
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
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#endif