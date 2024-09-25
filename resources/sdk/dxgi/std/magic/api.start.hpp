#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Xbad_function_call@std$dxgi.dll", 0x0, 0x0, false, 0x47929720a217c7ed)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$adopt_lock@std$dxgi.dll", 0xcc64a, 0x0, true, 0x4b1a7122c3aa8c70)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$defer_lock@std$dxgi.dll", 0xcc64e, 0x0, true, 0x7fa1bb6b148c7802)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Syserror_map@std$dxgi.dll", 0x25308, 0x0, true, 0xbe5438c45f1a13a6)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$try_to_lock@std$dxgi.dll", 0xcc64d, 0x0, true, 0x6b9757e5049fd2b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Winerror_map@std$dxgi.dll", 0x25338, 0x0, true, 0xa8c8d1d3ce411e70)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Xbad_alloc@std$dxgi.dll", 0x25288, 0x0, true, 0xca8cce02e307605f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Xlength_error@std$dxgi.dll", 0x252b0, 0x0, true, 0xe65a53378a18046f)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Xout_of_range@std$dxgi.dll", 0x252dc, 0x0, true, 0xb2775af6a15928a6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif