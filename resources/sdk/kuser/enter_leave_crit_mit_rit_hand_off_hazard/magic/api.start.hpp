#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Enter@EnterLeaveCritMitRitHandOffHazard$win32kbase.sys", 0x0, 0x0, false, 0x3b18d0cfa5d20390)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard$win32kbase.sys", 0x0, 0x0, false, 0x7b082a0c0f9a463)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_slSemWaiters@EnterLeaveCritMitRitHandOffHazard$win32kbase.sys", 0x0, 0x0, false, 0x26caf06b4965e743)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_spkSem@EnterLeaveCritMitRitHandOffHazard$win32kbase.sys", 0x0, 0x0, false, 0x759bebf1c3b96b36)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnInitialize@EnterLeaveCritMitRitHandOffHazard$win32kbase.sys", 0x0, 0x0, false, 0xda9f467d6bf93e86)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif