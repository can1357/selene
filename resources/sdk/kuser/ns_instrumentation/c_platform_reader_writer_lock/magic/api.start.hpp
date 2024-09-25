#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation$win32kbase.sys", 0x24b30, 0x0, true, 0xd493dd0de64d4a58)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation$win32kbase.sys", 0x84510, 0x0, true, 0x409cc46baae53b85)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation$win32kbase.sys", 0x27370, 0x0, true, 0xc1b93461cd6f199b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@CPlatformReaderWriterLock@NSInstrumentation$win32kbase.sys", 0x82fe0, 0x0, true, 0xa7e9d44b5087a51d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif