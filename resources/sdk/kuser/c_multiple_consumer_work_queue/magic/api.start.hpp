#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CMultipleConsumerWorkQueue$win32kfull.sys", 0x0, 0x0, false, 0x375fb8f2af847595)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateAndQueueWorkItem@CMultipleConsumerWorkQueue$win32kfull.sys", 0x0, 0x0, false, 0x7d1e084d6c178b77)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CMultipleConsumerWorkQueue$win32kfull.sys", 0x121404, 0x0, true, 0x166c2a4269b67e6d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue$win32kfull.sys", 0x98a50, 0x0, true, 0x1428d2d71500fc80)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif