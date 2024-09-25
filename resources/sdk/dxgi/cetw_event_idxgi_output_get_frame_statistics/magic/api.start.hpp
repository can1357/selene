#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_GetFrameStatistics@@QEAA@PEAXPEBUDXGI_FRAME_STATISTICS@@@Z$dxgi.dll", 0x50ed8, 0x0, true, 0x528efe23bdb4e869)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_GetFrameStatistics@@QEAA@XZ$dxgi.dll", 0x518a0, 0x0, true, 0x1b382b8a8bcedb52)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif