#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockExclusive@CInpPushLock$win32kbase.sys", 0x5ea90, 0x0, true, 0x990826acf5adfc83)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockShared@CInpPushLock$win32kbase.sys", 0x82fe0, 0x0, true, 0xbfcf3bdcf0b59350)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockExclusive@CInpPushLock$win32kbase.sys", 0x5cd00, 0x0, true, 0xcbd7f10a569dd1ad)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockShared@CInpPushLock$win32kbase.sys", 0x84510, 0x0, true, 0x4592f7ec4b0bcea4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif