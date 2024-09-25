#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$assign@shared_buffer@details@wil$dxgi.dll", 0x4775c, 0x0, true, 0x84e8afd7de2d96c8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$create@shared_buffer@details@wil$dxgi.dll", 0x477a0, 0x0, true, 0xb9046ac3c8bac5d7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$reset@shared_buffer@details@wil$dxgi.dll", 0x47b78, 0x0, true, 0x4483e4225269ddbc)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif