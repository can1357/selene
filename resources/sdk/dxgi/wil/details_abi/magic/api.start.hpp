#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$g_pProcessLocalData@details_abi@wil$dxgi.dll", 0xccea8, 0x0, true, 0x72b2c4eb9519455d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetThreadLocalDataCache@details_abi@wil$dxgi.dll", 0x45af0, 0x0, true, 0x32a76b2f27008aaf)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RecordWnfUsageIndex@details_abi@wil$dxgi.dll", 0x16600, 0x0, true, 0x252595e8328c07b9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif