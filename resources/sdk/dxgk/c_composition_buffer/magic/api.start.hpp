#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEnableScanout@CCompositionBuffer$dxgkrnl.sys", 0x0, 0x0, false, 0x45ad8d8b923b1d1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSwapChainRealizationInfo@CCompositionBuffer$dxgkrnl.sys", 0x0, 0x0, false, 0xebd2730524c82b6a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAdapterLuidAndGpuSync@CCompositionBuffer$dxgkrnl.sys", 0x63e70, 0x0, true, 0x30828539d31f6805)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHDR10PlusMetaData@CCompositionBuffer$dxgkrnl.sys", 0x1b180, 0x0, true, 0xd29eaca8a78c20e0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsSwapchainType@CCompositionBuffer$dxgkrnl.sys", 0x1b070, 0x0, true, 0xa5a472ad5811b28)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PreNotifyPendingFlipPresent@CCompositionBuffer$dxgkrnl.sys", 0x1adc0, 0x0, true, 0x6ec2b570c53c1e2a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalGpuFence@CCompositionBuffer$dxgkrnl.sys", 0x1b180, 0x0, true, 0x3ebaf6b3567cdb8d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif