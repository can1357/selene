#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Connect@CUserPlaySound$win32kfull.sys", 0x120c9c, 0x0, true, 0xde39a76b202d8ca4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Disconnect@CUserPlaySound$win32kfull.sys", 0x120d50, 0x0, true, 0xbf53903a74b998bd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PlaySync@CUserPlaySound$win32kfull.sys", 0xf8a10, 0x0, true, 0xb70ab9f0f3b3cf70)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_pUserPlaySound@CUserPlaySound$win32kfull.sys", 0x33aeb8, 0x0, true, 0x39ce29692ad87a2f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif