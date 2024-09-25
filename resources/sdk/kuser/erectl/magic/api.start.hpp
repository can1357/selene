#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vScale@ERECTL$win32kfull.sys", 0x26f440, 0x0, true, 0x1ca336d910121d4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bContain@ERECTL$win32kfull.sys", 0x139aa0, 0x0, true, 0x246ffc3540c0fb2e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bEmpty@ERECTL$win32kfull.sys", 0x85758, 0x0, true, 0xcd2ed369d42ba6aa)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bEqual@ERECTL$win32kbase.sys", 0x2f66c, 0x0, true, 0x95eeecfeddb81bff)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bOffsetAdd@ERECTL$win32kfull.sys", 0x146c38, 0x0, true, 0xdf9b255611b17dab)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bOffsetSubtract@ERECTL$win32kfull.sys", 0x26ed68, 0x0, true, 0x605b7fb3853bfac4)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bWrapped@ERECTL$win32kfull.sys", 0x44094, 0x0, true, 0xdc99784ec2d8e644)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vOrder@ERECTL$win32kfull.sys", 0x44068, 0x0, true, 0xe7325662f612ee5e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif