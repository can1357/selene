#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CDXGIModeDesc@@QEAA@AEBUDXGI_MODE_DESC1@@@Z$dxgi.dll", 0x22d44, 0x0, true, 0x88528df658e648ba)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CDXGIModeDesc@@QEAA@AEBU_devicemodeW@@@Z$dxgi.dll", 0x50b40, 0x0, true, 0x8d362de0a9c9b1eb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CDXGIModeDesc@@QEAA@XZ$dxgi.dll", 0x1fa70, 0x0, true, 0x2ec8eb8793db5b18)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif