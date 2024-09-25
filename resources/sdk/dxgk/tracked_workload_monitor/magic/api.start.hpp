#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x4654f9847bd396b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportState@TrackedWorkloadMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x235cb9df456f9afb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrentPowerLevel@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c408, 0x0, true, 0x7dbc66ca7913285a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Boost@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c32c, 0x0, true, 0x35f9ff644eecd9a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ChangeState@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c364, 0x0, true, 0xf6a73ec9d2abb92f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPowerLevel@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c420, 0x0, true, 0x17e229a86132c245)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSafeStdDev@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c468, 0x0, true, 0x6a0dfa8f787f1fe1)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTargetPowerLevel@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c538, 0x0, true, 0x4a04c3c1e0c787cb)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsSaturated@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c708, 0x0, true, 0x783b45fc08f54a3e)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetEffectivePowerLevel@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c764, 0x0, true, 0x326aa2997a5a81a9)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShouldDecreasePower@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c780, 0x0, true, 0x7ac4201dfcaaac94)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShouldIncreasePower@TrackedWorkloadMonitor$dxgkrnl.sys", 0x6c854, 0x0, true, 0x5bc621f1119306d2)
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
#endif