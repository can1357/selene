#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EvalAvailability@StereoModuleData$dxgi.dll", 0x461c, 0x0, true, 0x3c8703e6462362b6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Init@StereoModuleData$dxgi.dll", 0x4508, 0x0, true, 0x2f19243d7711ec8b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsStereoEnabledInternal@StereoModuleData$dxgi.dll", 0x70e48, 0x0, true, 0x72d3f0771ccbc098)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif