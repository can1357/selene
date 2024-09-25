#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LeaveGuardOnDwmWerStart@CInpLockGuard$win32kbase.sys", 0x0, 0x0, false, 0x2d54049c7a928fa4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LeaveGuardOnWerStart@CInpLockGuard$win32kbase.sys", 0x0, 0x0, false, 0xe6a4f2412a8cccc8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockSharedWithoutGuard@CInpLockGuard$win32kbase.sys", 0x0, 0x0, false, 0xfe33fe028b6582b8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLockWithoutGuard@CInpLockGuard$win32kbase.sys", 0x0, 0x0, false, 0x35883874f8467d39)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RefPointerMsgIdAndUnLock@CInpLockGuard$win32kbase.sys", 0xd4fd0, 0x0, true, 0x7a96afcf6884360b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnRefPointerMsgIdAndLockExclusive@CInpLockGuard$win32kbase.sys", 0xd50e0, 0x0, true, 0x4b8a3ec1a4b18b27)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnterGuard@CInpLockGuard$win32kbase.sys", 0x1ac510, 0x0, true, 0xd061c866dbf44b89)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncrementWaiters@CInpLockGuard$win32kbase.sys", 0x1ac550, 0x0, true, 0xef7fe7b5e09c24)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CInpLockGuard$win32kbase.sys", 0x75f2c, 0x0, true, 0xd2ae02f9cedff77a)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$isManipulationThreadInTermination@CInpLockGuard$win32kbase.sys", 0x2d230, 0x0, true, 0x7ef2f52f96899136)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$isOwned@CInpLockGuard$win32kbase.sys", 0x85030, 0x0, true, 0x91015b490a0e6f72)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LeaveGuard@CInpLockGuard$win32kbase.sys", 0x1ac560, 0x0, true, 0x578a689d6441a9ea)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LeaveGuardOnThreadTermination@CInpLockGuard$win32kbase.sys", 0x84fe0, 0x0, true, 0x167b1d2451b9bb86)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockExclusive@CInpLockGuard$win32kbase.sys", 0xd48a0, 0x0, true, 0x314aa95e5790c777)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockExclusiveWithoutGuard@CInpLockGuard$win32kbase.sys", 0x1ac5f0, 0x0, true, 0x6b76cc28d1366f48)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockShared@CInpLockGuard$win32kbase.sys", 0xd4c40, 0x0, true, 0xf96a85307129bb85)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnLock@CInpLockGuard$win32kbase.sys", 0xd5090, 0x0, true, 0xa81c62918c0d6713)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Uninitialize@CInpLockGuard$win32kbase.sys", 0x76be8, 0x0, true, 0x21abc7a521be90d0)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForGuard@CInpLockGuard$win32kbase.sys", 0x1ac610, 0x0, true, 0x9557b26789bc0406)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#endif