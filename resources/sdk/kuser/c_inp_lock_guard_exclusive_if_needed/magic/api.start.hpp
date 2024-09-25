#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z$win32kbase.sys", 0x0, 0x0, false, 0x1b73c496c90cac7b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z$win32kbase.sys", 0xd4560, 0x0, true, 0xf2f96f81d70b1382)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ$win32kbase.sys", 0xd4658, 0x0, true, 0x2f9aab3a670d03e2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif