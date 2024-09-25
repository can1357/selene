#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CLockedInputSpaceRegion@@QEAA@XZ$win32kbase.sys", 0x5a094, 0x0, true, 0xc8a031f5a20037f6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CLockedInputSpaceRegion@@QEAA@XZ$win32kbase.sys", 0xd3694, 0x0, true, 0xc7bee2f49e9e1e1b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif