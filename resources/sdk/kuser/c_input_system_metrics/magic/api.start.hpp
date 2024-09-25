#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHardwareType@CInputSystemMetrics$win32kbase.sys", 0x1c5240, 0x0, true, 0xa60c10a462b465e7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CInputSystemMetrics$win32kbase.sys", 0x79f7c, 0x0, true, 0x2532582f24244600)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdatePointerDeviceSystemMetrics@CInputSystemMetrics$win32kbase.sys", 0x1c5298, 0x0, true, 0x9a037c49504bd633)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WritePointerDevicePresenceKey@CInputSystemMetrics$win32kbase.sys", 0x7a1a0, 0x0, true, 0xd398998a73e972bb)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteSystemMetricsKey@CInputSystemMetrics$win32kbase.sys", 0x7a054, 0x0, true, 0x5ee12964032c6f12)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif