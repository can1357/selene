#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0xee0a9db5c64ee4b4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX$dxgkrnl.sys", 0x0, 0x0, false, 0xb6761d29c7619ab3)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX$dxgkrnl.sys", 0x0, 0x0, false, 0xbbbe2b695c283845)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif