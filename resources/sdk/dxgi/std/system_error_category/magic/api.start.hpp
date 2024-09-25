#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$default_error_condition@_System_error_category@std$dxgi.dll", 0x47840, 0x0, true, 0xa66df93da5c7d46)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$message@_System_error_category@std$dxgi.dll", 0x47aa0, 0x0, true, 0x6e3d472e0a28970)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$name@_System_error_category@std$dxgi.dll", 0x47b00, 0x0, true, 0x85eed7d9efe1943a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif