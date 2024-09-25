#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CompareToCurrent@CMonitorTopology$win32kbase.sys", 0x0, 0x0, false, 0xfec7824f8bd3512a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateTopologySnapshot@CMonitorTopology$win32kbase.sys", 0x0, 0x0, false, 0xa25d49f82d2b2dd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMonitorFromId@CMonitorTopology$win32kbase.sys", 0x0, 0x0, false, 0x68424653d2906e8b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMonitorId@CMonitorTopology$win32kbase.sys", 0x0, 0x0, false, 0x747f23c906750213)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IdenticalToCurrent@CMonitorTopology$win32kbase.sys", 0x0, 0x0, false, 0xe1661997a13f603c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockAndRelease@CMonitorTopology$win32kbase.sys", 0x0, 0x0, false, 0x3d189fc579104c1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif