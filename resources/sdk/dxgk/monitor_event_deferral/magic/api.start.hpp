#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeferMonitorEvent@MonitorEventDeferral$dxgkrnl.sys", 0x0, 0x0, false, 0xb006ec95c62bc775)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MonitorEventDeferral@@UEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xd1939f2c80150092)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FlushEventsWithContext@MonitorEventDeferral$dxgkrnl.sys", 0x0, 0x0, false, 0xb569eb4e22e76dda)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif