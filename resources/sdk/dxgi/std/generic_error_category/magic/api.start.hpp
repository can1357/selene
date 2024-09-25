#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$message@_Generic_error_category@std$dxgi.dll", 0x47a20, 0x0, true, 0x5baef378de452697)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$name@_Generic_error_category@std$dxgi.dll", 0x47ae0, 0x0, true, 0x7e242ea443398b38)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif