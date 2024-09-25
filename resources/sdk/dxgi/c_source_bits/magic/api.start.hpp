#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CSourceBits@@UEAA@XZ$dxgi.dll", 0x1fca0, 0x0, true, 0x250cc7cc76f5acf9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Rotation@CSourceBits$dxgi.dll", 0x1fd20, 0x0, true, 0x9ee055ea43106a6b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif