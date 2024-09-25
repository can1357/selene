#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInstance@CTouchpadAcceleration$win32kbase.sys", 0x0, 0x0, false, 0xedd28486a587d9bc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BuildAccelerationCurve@CTouchpadAcceleration$win32kbase.sys", 0xb0770, 0x0, true, 0x293350fa56a7feea)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceSpecificAccelerationData@CTouchpadAcceleration$win32kbase.sys", 0xc85b0, 0x0, true, 0x704849dfbde88762)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif