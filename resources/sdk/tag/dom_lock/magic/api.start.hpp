#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsLockedShared@tagDomLock$win32kfull.sys", 0x0, 0x0, false, 0x733430a06d400178)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsLockedExclusive@tagDomLock$win32kbase.sys", 0x30380, 0x0, true, 0x3ec0a2bd23b0eb09)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockExclusive@tagDomLock$win32kbase.sys", 0x30340, 0x0, true, 0xbfbf857000a10661)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockInitialize@tagDomLock$win32kbase.sys", 0xb7c40, 0x0, true, 0x550eb0e104e6b4e7)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockShared@tagDomLock$win32kbase.sys", 0x8d1c0, 0x0, true, 0x3b2714327ac4508a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockUnInitialize@tagDomLock$win32kbase.sys", 0xb91b0, 0x0, true, 0xbbca60f04da38922)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockExclusive@tagDomLock$win32kbase.sys", 0x8d1a0, 0x0, true, 0x3e3b60245efc91a1)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockShared@tagDomLock$win32kbase.sys", 0x8d1a0, 0x0, true, 0x98bc69f6b86bd9cc)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif