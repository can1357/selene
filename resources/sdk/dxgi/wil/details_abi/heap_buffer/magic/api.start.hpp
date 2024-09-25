#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$reserve@heap_buffer@details_abi@wil$dxgi.dll", 0x0, 0x0, false, 0xec9000a83ec4f1f3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ensure@heap_buffer@details_abi@wil$dxgi.dll", 0x141c8, 0x0, true, 0x7422ca470fe57d5f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$push_back@heap_buffer@details_abi@wil$dxgi.dll", 0x13cc4, 0x0, true, 0xc05fa869fc47d2b8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif