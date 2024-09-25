#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ$win32kfull.sys", 0x573cc, 0x0, true, 0x50ca9636fd5e6aae)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ$win32kfull.sys", 0x57314, 0x0, true, 0xe82ba6a5e747725a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif