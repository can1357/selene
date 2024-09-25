#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PiiFilterCreate$dxgi.dll", 0x80224, 0x0, true, 0x86fef29b3c7bc821)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PiiFilterDelete$dxgi.dll", 0x1f6a0, 0x0, true, 0xc35001aaeb2931a4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PiiFilterExecute$dxgi.dll", 0x80360, 0x0, true, 0x3c5693afc8d8cd61)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PiiFilterpAddEnvironment$dxgi.dll", 0x7fb30, 0x0, true, 0xf68b226135019963)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PiiFilterpAddItemSorted$dxgi.dll", 0x7fd20, 0x0, true, 0x89dfce57f01999b7)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PiiFilterpAddProfiles$dxgi.dll", 0x7fdd4, 0x0, true, 0xf58f306ab2c59b5e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif