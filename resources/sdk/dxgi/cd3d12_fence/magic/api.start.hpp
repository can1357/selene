#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetVSyncInterruptControlData@CD3D12Fence$dxgi.dll", 0x0, 0x0, false, 0x7078a8a87dfe37cf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateSharedHandle@CD3D12Fence$dxgi.dll", 0x7be10, 0x0, true, 0x2f1db9a4badddeb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CD3D12Fence@@QEAA@XZ$dxgi.dll", 0x7bdc8, 0x0, true, 0x17d69904bbcc95b0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UCBreakCyclicReferences@CD3D12Fence$dxgi.dll", 0x1fa70, 0x0, true, 0x2dec4c1d45e2e050)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UCEstablishCyclicReferences@CD3D12Fence$dxgi.dll", 0x1fa70, 0x0, true, 0x3c27bdc733314664)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif