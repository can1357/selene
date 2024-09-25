#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInstance@CMouseAcceleration$win32kbase.sys", 0x0, 0x0, false, 0x3f5e235a8a11b2b0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BuildAccelerationCurve@CMouseAcceleration$win32kbase.sys", 0xb0710, 0x0, true, 0x17032e01b01cd363)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CMouseAcceleration@@IEAA@I@Z$win32kbase.sys", 0x8ac64, 0x0, true, 0x8dfa30d5966f04e1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceSpecificAccelerationData@CMouseAcceleration$win32kbase.sys", 0xc8580, 0x0, true, 0xda62d27985593bac)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif