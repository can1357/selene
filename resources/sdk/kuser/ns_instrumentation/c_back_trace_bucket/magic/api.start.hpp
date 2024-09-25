#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Insert@CBackTraceBucket@NSInstrumentation$win32kfull.sys", 0x2ddc5c, 0x0, true, 0x25ae7cddb1ef6a71)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lookup@CBackTraceBucket@NSInstrumentation$win32kfull.sys", 0x2dde24, 0x0, true, 0xf451f7dcf82b5c24)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Remove@CBackTraceBucket@NSInstrumentation$win32kfull.sys", 0x2ddf88, 0x0, true, 0x3d8767e339fb23f8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif