#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ppfeFirst@ENUMFHOBJ$win32kfull.sys", 0x2943a4, 0x0, true, 0xab504d00dc61b6fb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ppfeNext@ENUMFHOBJ$win32kfull.sys", 0x2943dc, 0x0, true, 0xd1c579c12518afc4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif