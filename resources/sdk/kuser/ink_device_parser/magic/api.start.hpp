#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsInkDevice@InkDeviceParser$win32kfull.sys", 0x0, 0x0, false, 0xedf21dc09f57fff0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceCaps@InkDeviceParser$win32kfull.sys", 0x250788, 0x0, true, 0x591e21928599a0ca)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceFeatures@InkDeviceParser$win32kfull.sys", 0x2509e4, 0x0, true, 0x562d93e514ace967)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PopulatePayloadReport@InkDeviceParser$win32kfull.sys", 0x250af4, 0x0, true, 0x1794d95758a0f721)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif