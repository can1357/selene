#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_GetGammaControl@@QEAA@PEAXPEBUDXGI_GAMMA_CONTROL@@@Z$dxgi.dll", 0x50fa4, 0x0, true, 0x820f8ddb08f38fc5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_GetGammaControl@@QEAA@XZ$dxgi.dll", 0x5190c, 0x0, true, 0x2f0bb3cd3118148e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif