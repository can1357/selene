#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_exEnvironment@CBaseProcessor$win32kbase.sys", 0x0, 0x0, false, 0xacd6083db1b9a839)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetExecutionEnvironment@CBaseProcessor$win32kbase.sys", 0x0, 0x0, false, 0xad832f44a62cfe17)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetUMInputObservationState@CBaseProcessor$win32kbase.sys", 0x1c2774, 0x0, true, 0x1200257646432db8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsUMSuppressed@CBaseProcessor$win32kbase.sys", 0x1c2748, 0x0, true, 0x1809789b9342f6b5)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MasterInputThreadActivated@CBaseProcessor$win32kbase.sys", 0x15eb0, 0x0, true, 0x36e2073562e58436)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MasterInputThreadDeactivated@CBaseProcessor$win32kbase.sys", 0xc8570, 0x0, true, 0xf81c5028d74eaf74)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostQEventWork@CBaseProcessor$win32kbase.sys", 0xb49b0, 0x0, true, 0x78c3434e18d1f5e7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif