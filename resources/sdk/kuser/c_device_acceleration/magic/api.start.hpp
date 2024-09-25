#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Accelerate@CDeviceAcceleration$win32kbase.sys", 0x59088, 0x0, true, 0xfd493834186c532e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_BuildAccelerationCurve@CDeviceAcceleration$win32kbase.sys", 0xb07ac, 0x0, true, 0xfde67ea7233d9f15)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateDefaultAcceleratorCurve@CDeviceAcceleration$win32kbase.sys", 0x6da04, 0x0, true, 0x574dcc32b8d6d44b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetAccelerationCurves@CDeviceAcceleration$win32kbase.sys", 0x58d54, 0x0, true, 0x1ff0fbd2a8a7e20d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif