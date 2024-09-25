#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceObject@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x5f590b2d89ffc6c2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x542cd02912da5644)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x7021458e1b14a7e8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPnpDeviceProperty@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xc5e04248787bb19e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xd65c4f1ed8d1b531)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xb2dbeea2de71b573)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x4d07587ce820d271)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif