#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem$win32kfull.sys", 0xbadfc, 0x0, true, 0x85405f3a3c3a47a4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ritTimerScanWakeEvent@CRitTimerScanWakeSystem$win32kfull.sys", 0x33aea8, 0x0, true, 0x9181dacdb2c1ad91)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ritTimerScanWakeSystemLock@CRitTimerScanWakeSystem$win32kfull.sys", 0x33b120, 0x0, true, 0x6874dd326aec854e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif