#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CInpUnlockGuardExclusive@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x74a9f2a185d44cbb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z$win32kbase.sys", 0xd4618, 0x0, true, 0xa1bf0f064c4feaf0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif