#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0REMOTE_VSYNC@@QEAA@XZ$dxgkrnl.sys", 0x17c0fc, 0x0, true, 0x655b77e245a1ce47)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1REMOTE_VSYNC@@QEAA@XZ$dxgkrnl.sys", 0x284d34, 0x0, true, 0x4a03f77877b8e20a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnsureEmulationRunning@REMOTE_VSYNC$dxgkrnl.sys", 0xd5ad0, 0x0, true, 0xf0d04c898566ae6f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetScanLine@REMOTE_VSYNC$dxgkrnl.sys", 0x284d70, 0x0, true, 0x76905a89d82a5b0c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StartEmulation@REMOTE_VSYNC$dxgkrnl.sys", 0xd5b74, 0x0, true, 0x817e8b91f041b270)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForVSync@REMOTE_VSYNC$dxgkrnl.sys", 0xd5a20, 0x0, true, 0x54f3bd1c44456642)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif