#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@RimBackedDeviceBase@Rim$win32kfull.sys", 0x244240, 0x0, true, 0x3a72f019b6ffd1a5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDeviceClosed@RimBackedDeviceBase@Rim$win32kfull.sys", 0x244280, 0x0, true, 0xe0566e179709edd4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDeviceOpened@RimBackedDeviceBase@Rim$win32kfull.sys", 0x2442c0, 0x0, true, 0xba2939d8a2dad30c)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendSynchronousIoControl@RimBackedDeviceBase@Rim$win32kfull.sys", 0x244310, 0x0, true, 0x3c924312094d7b22)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnInitialize@RimBackedDeviceBase@Rim$win32kfull.sys", 0x2443e0, 0x0, true, 0x6286457ef92aedd4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif