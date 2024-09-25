#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK$dxgkrnl.sys", 0x0, 0x0, false, 0xd6eac29d58ba0b14)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK$dxgkrnl.sys", 0x333c, 0x0, true, 0x5c58cd7765001e01)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ$dxgkrnl.sys", 0x24484, 0x0, true, 0xd12c7612a9e1c5d3)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ$dxgkrnl.sys", 0x1a970, 0x0, true, 0xaf67ea39482e3d3e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif