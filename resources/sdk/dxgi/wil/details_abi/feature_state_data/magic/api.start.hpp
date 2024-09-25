#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RecordFeatureUsage@FeatureStateData@details_abi@wil$dxgi.dll", 0x13ebc, 0x0, true, 0x3e8ad4f522e07549)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessShutdown@FeatureStateData@details_abi@wil$dxgi.dll", 0x25158, 0x0, true, 0x8cc802e90708ef3a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RecordUsage@FeatureStateData@details_abi@wil$dxgi.dll", 0x139f0, 0x0, true, 0x2a32acd0daec4558)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RetrieveUsageUnderLock@FeatureStateData@details_abi@wil$dxgi.dll", 0x14438, 0x0, true, 0xdc754bd858c9afe)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif