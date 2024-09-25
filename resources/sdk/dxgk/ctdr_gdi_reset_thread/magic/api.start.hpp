#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CTDR_GDI_RESET_THREAD@@MEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xc54db419308767c7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SwitchGdi@CTDR_GDI_RESET_THREAD$dxgkrnl.sys", 0x25f390, 0x0, true, 0x3f3001fba2dc950e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GdiCalloutLoop@CTDR_GDI_RESET_THREAD$dxgkrnl.sys", 0x25f0dc, 0x0, true, 0x8a1fe925ec83ae52)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD$dxgkrnl.sys", 0x25f200, 0x0, true, 0xe89eb3781a61f4bb)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Worker@CTDR_GDI_RESET_THREAD$dxgkrnl.sys", 0x261040, 0x0, true, 0xfc3c6918d0e570b9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif