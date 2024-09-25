#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMapping@HOSTVMMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0xf42c7abfd60de17b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveMapping@HOSTVMMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0x9c8dddfbc3915b6b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0xa24ad807ac5c9808)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TriggerRemoteVsync@HOSTVMMONITORMAPPING$dxgkrnl.sys", 0x0, 0x0, false, 0x1cbc7f76e46700b6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif