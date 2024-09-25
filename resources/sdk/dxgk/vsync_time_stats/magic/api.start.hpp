#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VSYNC_TIME_STATS@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xe4b31e9ebacce18b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MonitorPowerStateChange@VSYNC_TIME_STATS$dxgkrnl.sys", 0x0, 0x0, false, 0xc3575f429da0502b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VSyncStateChange@VSYNC_TIME_STATS$dxgkrnl.sys", 0x0, 0x0, false, 0x24b89708e8da6d7a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif