#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIsCMYKColor@EBRUSHOBJ$win32kfull.sys", 0x26db44, 0x0, true, 0x92c3cd52c995a7e2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$mixBest@EBRUSHOBJ$win32kfull.sys", 0x137b28, 0x0, true, 0x4b29dfeffec40d2e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDelete@EBRUSHOBJ$win32kbase.sys", 0x452e0, 0x0, true, 0x7cec3ad620f74e6e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInitBrush@EBRUSHOBJ$win32kbase.sys", 0x458a0, 0x0, true, 0x559483b2c1046c38)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif