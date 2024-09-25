#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z$win32kfull.sys", 0x0, 0x0, false, 0x2260cff9b6adbd6a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z$win32kfull.sys", 0x155674, 0x0, true, 0xcf09d61482fd7d6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CInpLockGuardExclusive@@QEAA@XZ$win32kfull.sys", 0x1556b0, 0x0, true, 0x4db3196b4fc8f6c6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif