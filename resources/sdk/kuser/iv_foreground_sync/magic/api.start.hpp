#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ivOnChildPartitionConnected@IVForegroundSync$win32kbase.sys", 0x0, 0x0, false, 0x1ec3825f70d24f73)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ivReceiveForegroundUpdate@IVForegroundSync$win32kbase.sys", 0x0, 0x0, false, 0x61fef5df1fff67b6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ivSendForegroundUpdate@IVForegroundSync$win32kbase.sys", 0x0, 0x0, false, 0x6a09481694d72e7e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif