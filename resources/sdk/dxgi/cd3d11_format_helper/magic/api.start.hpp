#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetName@CD3D11FormatHelper$dxgi.dll", 0x249a8, 0x0, true, 0xb0938af71d11bfd0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_FormatDetail@CD3D11FormatHelper$dxgi.dll", 0x996e0, 0x0, true, 0x373b790fae4627da)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_FormatNames@CD3D11FormatHelper$dxgi.dll", 0x9d680, 0x0, true, 0x51d8c6da6229937c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif