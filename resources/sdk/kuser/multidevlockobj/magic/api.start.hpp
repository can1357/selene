#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MULTIDEVLOCKOBJ@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0xe2db559f73be46ed)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInit@MULTIDEVLOCKOBJ$win32kbase.sys", 0x4f6c0, 0x0, true, 0x85f4ab4cecf32ff8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLock@MULTIDEVLOCKOBJ$win32kbase.sys", 0x4f3d8, 0x0, true, 0x21b1f0e69b2a6f2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@MULTIDEVLOCKOBJ$win32kbase.sys", 0x4f2c0, 0x0, true, 0x94b03a952e778494)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif