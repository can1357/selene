#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnKeyEvent@CAsyncKeyEventMonitor$win32kbase.sys", 0x6a154, 0x0, true, 0x71f289c51a52ced1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnKeyStateRequested@CAsyncKeyEventMonitor$win32kbase.sys", 0x715f0, 0x0, true, 0x23d31d264d6587d2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor$win32kbase.sys", 0x6d64c, 0x0, true, 0xcac1e9b5a59e4731)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif