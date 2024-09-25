#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIs1@EFLOAT$win32kbase.sys", 0x14c0c8, 0x0, true, 0x31a27a199fcd1620)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIs16@EFLOAT$win32kfull.sys", 0x13f4f0, 0x0, true, 0x2391668ddf53f91d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIs1Over16@EFLOAT$win32kfull.sys", 0x29804, 0x0, true, 0x52aedb60af5ff2ac)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIsZero@EFLOAT$win32kfull.sys", 0x4707c, 0x0, true, 0xd703e053e9265f1b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$eqCross@EFLOAT$win32kbase.sys", 0x151350, 0x0, true, 0x8ee9ea958f8b3f37)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$eqLength@EFLOAT$win32kbase.sys", 0x9f900, 0x0, true, 0x53c76d29365cba76)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vAbs@EFLOAT$win32kfull.sys", 0x6e0b8, 0x0, true, 0x8cd9a4dab10e8152)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vSqrt@EFLOAT$win32kfull.sys", 0x114988, 0x0, true, 0x7f15d7f379d939e1)
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