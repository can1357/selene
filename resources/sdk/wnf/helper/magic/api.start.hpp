#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DoNothingWnfCallbackFn@WNFHelper$dxgi.dll", 0x1fd40, 0x0, true, 0x566d2eb26e489dbd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RegisterWNFNotificationStartingFromCurrentState@WNFHelper$dxgi.dll", 0x6128, 0x0, true, 0xcfec773ebf40494d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif