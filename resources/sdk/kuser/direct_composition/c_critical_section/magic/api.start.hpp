#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@CCriticalSection@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0xd6c25e180326b3cd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@CCriticalSection@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x36f99fa9501cc437)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TryAcquireExclusive@CCriticalSection@DirectComposition$win32kbase.sys", 0x816a0, 0x0, true, 0x4a5d21d5286268a7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif