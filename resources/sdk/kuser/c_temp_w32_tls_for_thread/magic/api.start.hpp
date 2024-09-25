#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CTempW32TlsForThread@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x2ba3e817359b4e0a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CTempW32TlsForThread@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0xd1d7639b0752ff88)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif