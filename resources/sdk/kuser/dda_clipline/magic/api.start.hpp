#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bInit@DDA_CLIPLINE$win32kfull.sys", 0x13bbe0, 0x0, true, 0xec00a4e8bd59c932)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnflip@DDA_CLIPLINE$win32kfull.sys", 0x13bb6c, 0x0, true, 0xf9044e20aa7b1b11)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$yCompute@DDA_CLIPLINE$win32kfull.sys", 0x13bba4, 0x0, true, 0x5a8cce78acafe9e8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif