#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInstance@CKeyboardSensor$win32kbase.sys", 0x0, 0x0, false, 0x9e538a777e1661a7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDispatchersName@CKeyboardSensor$win32kbase.sys", 0xc84f0, 0x0, true, 0x2088cab97e7006b8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetProcessor@CKeyboardSensor$win32kbase.sys", 0xc8520, 0x0, true, 0xbc70cc5d12addb26)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostInitialize@CKeyboardSensor$win32kbase.sys", 0xc09a0, 0x0, true, 0x2d39bf2cf684ade3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PreUninitialize@CKeyboardSensor$win32kbase.sys", 0x76b60, 0x0, true, 0xc43a9ab3cf92191b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessInput@CKeyboardSensor$win32kbase.sys", 0x1b2ce0, 0x0, true, 0x97366cc86bcf5e9c)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateKeyboardLEDs@CKeyboardSensor$win32kbase.sys", 0x58740, 0x0, true, 0x4708c80e922b8829)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif