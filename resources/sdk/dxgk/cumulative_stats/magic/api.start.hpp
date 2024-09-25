#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Add@CumulativeStats$dxgkrnl.sys", 0x6c2c0, 0x0, true, 0xc73024d75a6a564e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetStats@CumulativeStats$dxgkrnl.sys", 0x6c4c4, 0x0, true, 0xc127f2958672714a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif