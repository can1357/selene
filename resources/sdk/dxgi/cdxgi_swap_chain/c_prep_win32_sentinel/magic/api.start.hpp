#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepUser@CPrepWin32Sentinel@CDXGISwapChain$dxgi.dll", 0x22c68, 0x0, true, 0xc44cb21b0835b135)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepWin32AndReturnAddRefedOutput@CPrepWin32Sentinel@CDXGISwapChain$dxgi.dll", 0x22a3c, 0x0, true, 0xc19da6a98c872d90)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RestoreDesktopMode@CPrepWin32Sentinel@CDXGISwapChain$dxgi.dll", 0x6c54c, 0x0, true, 0xf0ce52b318547603)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif