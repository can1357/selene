#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CLockedInputSpace@@QEAA@XZ$win32kbase.sys", 0x5a094, 0x0, true, 0x26da3e010374d9c1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CLockedInputSpace@@QEAA@XZ$win32kbase.sys", 0xd3694, 0x0, true, 0xb7811adab022e094)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif