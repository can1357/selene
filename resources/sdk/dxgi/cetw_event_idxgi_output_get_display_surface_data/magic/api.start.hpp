#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIOutput_GetDisplaySurfaceData@@QEAA@PEAXPEAUIDXGISurface@@@Z$dxgi.dll", 0x50e20, 0x0, true, 0x697c7c65b467cbe3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIOutput_GetDisplaySurfaceData@@QEAA@XZ$dxgi.dll", 0x51834, 0x0, true, 0xddc08dfa69915637)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif