#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnSignaled@SubscriptionList@details_abi@wil$dxgi.dll", 0x15d88, 0x0, true, 0x2fb3275c91034b43)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SubscribeUnderLock@SubscriptionList@details_abi@wil$dxgi.dll", 0x14024, 0x0, true, 0xbbcb703bad35ca5d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unsubscribe@SubscriptionList@details_abi@wil$dxgi.dll", 0x4e48, 0x0, true, 0xca681c2165dc7e0e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif