#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SafeUnknownDecrementReference@Details@WRL@Microsoft$dxgi.dll", 0x28620, 0x0, true, 0x4a38642a5f404a0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SafeUnknownIncrementReference@Details@WRL@Microsoft$dxgi.dll", 0x2864c, 0x0, true, 0x2856ad940f4e271a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif