#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_GetDisplayModeList@@QEAA@PEAXW4DXGI_FORMAT@@IPEBIPEBUDXGI_MODE_DESC@@@Z$dxgi.dll", 0x50d0c, 0x0, true, 0x2afb0019f2bb03ef)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_GetDisplayModeList@@QEAA@XZ$dxgi.dll", 0x517c8, 0x0, true, 0x48c4391a353de58d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif