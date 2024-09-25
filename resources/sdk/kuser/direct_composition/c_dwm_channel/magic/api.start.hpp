#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CDwmChannel@DirectComposition$win32kbase.sys", 0x7e59c, 0x0, true, 0xe858ffd49a104eb3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBatchMinimumPayloadSize@CDwmChannel@DirectComposition$win32kbase.sys", 0xc8820, 0x0, true, 0xc33f8e23910241b2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetType@CDwmChannel@DirectComposition$win32kbase.sys", 0xa18c0, 0x0, true, 0x46f1347cf041e8e5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReferenceHandleAndLock@CDwmChannel@DirectComposition$win32kbase.sys", 0xccfc, 0x0, true, 0xafd6c701c95b54ce)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SubmitDwmBatch@CDwmChannel@DirectComposition$win32kbase.sys", 0xc5cc, 0x0, true, 0xe6c8d7f434d5d9e6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif