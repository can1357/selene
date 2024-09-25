#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1COLORTRANSFORMOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xae7b151e6f5dafe)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bDelete@COLORTRANSFORMOBJ$win32kfull.sys", 0x293f88, 0x0, true, 0xd9747b9b5027c6ce)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$hCreate@COLORTRANSFORMOBJ$win32kfull.sys", 0x29419c, 0x0, true, 0x6ea0c60bdab1b367)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif