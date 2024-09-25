#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$make@float16$dxgi.dll", 0x583ac, 0x0, true, 0x5aaf26f95696ff10)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$toFloat32_AsUINT32Bits@float16$dxgi.dll", 0x5852c, 0x0, true, 0xfe4efce04beb3494)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif