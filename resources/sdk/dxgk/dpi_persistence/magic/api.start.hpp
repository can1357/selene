#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateMonitorSetIdFromAdapterSource@DpiPersistence$dxgkrnl.sys", 0x135840, 0x0, true, 0xd964a81b22ba8654)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AppendMonitorId@DpiPersistence$dxgkrnl.sys", 0x136b5c, 0x0, true, 0x2e0e9c9a88654493)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateMonitorSetId@DpiPersistence$dxgkrnl.sys", 0x136874, 0x0, true, 0x749f965cb54b1ca2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMonitorIdFromTargetId@DpiPersistence$dxgkrnl.sys", 0x136be0, 0x0, true, 0x9b2db81132c7cdf)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadDpiFromRegistry@DpiPersistence$dxgkrnl.sys", 0x13545c, 0x0, true, 0x1b8780a1ad719c81)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveHKCUPathInSessionData@DpiPersistence$dxgkrnl.sys", 0x139510, 0x0, true, 0xf87e75f27ec7d26b)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SortMonitorSetIdAndAppendHash@DpiPersistence$dxgkrnl.sys", 0x1358e8, 0x0, true, 0x50773891b4ec7537)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteDpiToHKLMRegistry@DpiPersistence$dxgkrnl.sys", 0x2a4304, 0x0, true, 0x20b5951ffb99c1bb)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteDpiToRegistry@DpiPersistence$dxgkrnl.sys", 0x2a43c8, 0x0, true, 0x1d05147adc97108f)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteDwordToParticularRegValue@DpiPersistence$dxgkrnl.sys", 0x1352f8, 0x0, true, 0xe78520681edec344)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#endif