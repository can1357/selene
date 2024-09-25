#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ$dxgkrnl.sys", 0x1497f8, 0x0, true, 0x4f1c35e5b9125f97)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT$dxgkrnl.sys", 0x14daac, 0x0, true, 0x74364b234b50b304)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif