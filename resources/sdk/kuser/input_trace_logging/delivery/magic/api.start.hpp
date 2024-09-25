#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CallDefaultInputHandler@Delivery@InputTraceLogging$win32kfull.sys", 0x228c24, 0x0, true, 0xb785f66ca2f892a1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CallDelegateThread@Delivery@InputTraceLogging$win32kfull.sys", 0x1e0538, 0x0, true, 0x7f80bac24edafc0c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CoalesceMessage@Delivery@InputTraceLogging$win32kbase.sys", 0x1946c8, 0x0, true, 0xaab10a264872994e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostInputMessage@Delivery@InputTraceLogging$win32kfull.sys", 0xb0d0c, 0x0, true, 0xd25d6d2b268589a1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ScanSysQueue@Delivery@InputTraceLogging$win32kfull.sys", 0xb20c0, 0x0, true, 0x2861e226fdbef11c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateISODState@Delivery@InputTraceLogging$win32kbase.sys", 0x1534, 0x0, true, 0x7e037bf310c1162)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif