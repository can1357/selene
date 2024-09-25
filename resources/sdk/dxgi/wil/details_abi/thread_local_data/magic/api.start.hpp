#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Clear@ThreadLocalData@details_abi@wil$dxgi.dll", 0x4507c, 0x0, true, 0xb25fa126c21c8813)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetLastError@ThreadLocalData@details_abi@wil$dxgi.dll", 0x46fc8, 0x0, true, 0xb130db4772f44dc6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif