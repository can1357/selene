#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Combine@AutoHRGN$dxgi.dll", 0x663d4, 0x0, true, 0x3fa64aeb28c6fd3b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1AutoHRGN@@QEAA@XZ$dxgi.dll", 0x20e90, 0x0, true, 0x5a456db21d8b034d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Set@AutoHRGN$dxgi.dll", 0x6d020, 0x0, true, 0xd66c1f21d193e65a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif