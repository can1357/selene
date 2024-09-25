#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_SetGammaControl@@QEAA@PEAXPEBUDXGI_GAMMA_CONTROL@@@Z$dxgi.dll", 0x51204, 0x0, true, 0x72d3c1d11fe05777)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_SetGammaControl@@QEAA@XZ$dxgi.dll", 0x51a50, 0x0, true, 0x338b0da85018277b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif