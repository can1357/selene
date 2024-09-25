#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$default_error_condition@error_category@std$dxgi.dll", 0x47890, 0x0, true, 0xd6559a58e4eabb83)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$equivalent@error_category@std$dxgi.dll", 0x478d0, 0x0, true, 0x685e6c9e1f2af24d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif