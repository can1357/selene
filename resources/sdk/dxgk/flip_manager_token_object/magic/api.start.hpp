#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockForWrite@FlipManagerTokenObject$dxgkrnl.sys", 0x0, 0x0, false, 0xea665f7c4a2fe1a0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetFlipManagerObjectNoRef@FlipManagerTokenObject$dxgkrnl.sys", 0x6129c, 0x0, true, 0x85cd3e71924647d9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPresentId@FlipManagerTokenObject$dxgkrnl.sys", 0x612f8, 0x0, true, 0xc32dc7ed42c9525e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkCompleted@FlipManagerTokenObject$dxgkrnl.sys", 0x61384, 0x0, true, 0x3986dfaff565d58b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkPending@FlipManagerTokenObject$dxgkrnl.sys", 0x628c8, 0x0, true, 0x2a84d8efdac776c4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ObjectInit@FlipManagerTokenObject$dxgkrnl.sys", 0x615a0, 0x0, true, 0xa3a95cc70bd1928e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif