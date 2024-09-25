#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ScopedD3D12InternalDeviceChildCreation@@QEAA@PEAUID3D12DebugDeviceInternal@@@Z$dxgi.dll", 0x77b7c, 0x0, true, 0x3cf5088321a2071e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ScopedD3D12InternalDeviceChildCreation@@QEAA@XZ$dxgi.dll", 0x78108, 0x0, true, 0x17751c14f0c65c08)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif