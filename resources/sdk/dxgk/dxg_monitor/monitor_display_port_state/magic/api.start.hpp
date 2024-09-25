#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAddress@MonitorDisplayPortState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xbccef1bdb5dd4fc7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsAddressValid@MonitorDisplayPortState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x381c101d289b8cf7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnInitialized@MonitorDisplayPortState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xa2974e2732a42bc6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif