#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CMultiPerObjectLockExclusivePpiPtiQ@@QEAA@PEAUtagTHREADINFO@@@Z$win32kbase.sys", 0x9f8a0, 0x0, true, 0x26d9e43f71ed86c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CMultiPerObjectLockExclusivePpiPtiQ@@QEAA@XZ$win32kbase.sys", 0x15eb0, 0x0, true, 0x5a9615cc2e688db5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$lock@CMultiPerObjectLockExclusivePpiPtiQ$win32kbase.sys", 0x15eb0, 0x0, true, 0xd5425a6412ea841d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$unlock@CMultiPerObjectLockExclusivePpiPtiQ$win32kbase.sys", 0x15eb0, 0x0, true, 0x942af637134f1360)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif