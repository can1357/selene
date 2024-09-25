#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIFactory_GetWindowAssociation@@QEAA@PEAXPEBQEAUHWND__@@@Z$dxgi.dll", 0x5ea90, 0x0, true, 0xc26da25e38b938c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIFactory_GetWindowAssociation@@QEAA@XZ$dxgi.dll", 0x5f0d4, 0x0, true, 0x366418a6c2606e8b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif