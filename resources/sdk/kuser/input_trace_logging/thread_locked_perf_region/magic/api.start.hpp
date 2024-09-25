#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@ThreadLockedPerfRegion@InputTraceLogging$win32kfull.sys", 0x1d526c, 0x0, true, 0x36078cfd750a9be8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_pLookaside@ThreadLockedPerfRegion@InputTraceLogging$win32kbase.sys", 0x2577b8, 0x0, true, 0xa477281893c10831)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif