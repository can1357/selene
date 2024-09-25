#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddDisplaySource@SESSION_VIEW$dxgkrnl.sys", 0x12f468, 0x0, true, 0x6a7aa2da16558024)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SESSION_VIEW@@QEAA@XZ$dxgkrnl.sys", 0x12f824, 0x0, true, 0x71a6c4f2251c437a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNextDisplaySource@SESSION_VIEW$dxgkrnl.sys", 0x12430c, 0x0, true, 0x951174b086a53b2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPrimaryDisplaySource@SESSION_VIEW$dxgkrnl.sys", 0x12432c, 0x0, true, 0x69d2c4cd1c138cf0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsCrossAdapterView@SESSION_VIEW$dxgkrnl.sys", 0x299688, 0x0, true, 0x64a308d968fffc76)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveAllDisplaySource@SESSION_VIEW$dxgkrnl.sys", 0x12f84c, 0x0, true, 0xd4d5134d1791be47)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveDisplaySource@SESSION_VIEW$dxgkrnl.sys", 0x299aa0, 0x0, true, 0xc20d649d4128fb68)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif