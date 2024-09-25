#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CAutoMutex@@QEAA@PEAVCMutex@@@Z$win32kbase.sys", 0x0, 0x0, false, 0x1b976cfa82ab5199)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CAutoMutex@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0xedb40dfbf066a145)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif