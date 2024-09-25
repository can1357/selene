#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_SetDisplaySurface@@QEAA@PEAXPEAUIDXGISurface@@@Z$dxgi.dll", 0x5114c, 0x0, true, 0xd91c44a4266393d3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_SetDisplaySurface@@QEAA@XZ$dxgi.dll", 0x519e4, 0x0, true, 0x6a0c560c2c63ac20)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif