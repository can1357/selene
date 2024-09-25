#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateMonitorDriverInterface@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x3d17281555c84588)
#else
#define _m0(...) __VA_ARGS__
#endif