#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z$win32kbase.sys", 0x0, 0x0, false, 0xcffe3bcd64036852)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z$win32kbase.sys", 0xd45bc, 0x0, true, 0xb11300f49a8536e5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CInpLockGuardShared@@QEAA@XZ$win32kbase.sys", 0xd4658, 0x0, true, 0xc1c6e52dbdf16203)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif