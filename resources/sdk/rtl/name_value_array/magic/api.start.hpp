#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Clear@RtlNameValueArray$dxgi.dll", 0x7f6a4, 0x0, true, 0xf172cb4a3788193d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Free@RtlNameValueArray$dxgi.dll", 0x7f74c, 0x0, true, 0xfc2bb7ac21d7c2d4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetValue@RtlNameValueArray$dxgi.dll", 0x7f790, 0x0, true, 0x7efdac5a89b2914c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Insert@RtlNameValueArray$dxgi.dll", 0x7f7ec, 0x0, true, 0x5ab9844d752b7481)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif