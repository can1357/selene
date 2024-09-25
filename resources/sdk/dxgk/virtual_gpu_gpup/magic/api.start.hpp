#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DisconnectVM@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x0, 0x0, false, 0xd2d832fe1444ddc9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232050, 0x0, true, 0x4c8e28b40f363eab)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232140, 0x0, true, 0x7c8c7f4195ad84fe)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBackingResource@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232200, 0x0, true, 0x94f3c2cfc47c1936)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceLocation@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232220, 0x0, true, 0xf34a8474db46e1a4)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMmioRangeCount@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232240, 0x0, true, 0x884ca8e467f9ede8)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMmioRanges@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232260, 0x0, true, 0x8d6b000992e7e517)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetResourceForBar@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232280, 0x0, true, 0x55bf9aea4f22a20e)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetVendorAndDevice@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2322a0, 0x0, true, 0x6368fc7f5fe81fc3)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetVirtualGpuInfo@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2322c0, 0x0, true, 0xb4d95db34ddbef5b)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryMitigatedRangeCount@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2323d0, 0x0, true, 0x1517c0d8d8f71850)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryMitigatedRanges@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2323f0, 0x0, true, 0x5da98aebe28d6210)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryProbedBars@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232410, 0x0, true, 0x306364cc008679dc)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryVirtualFunctionLuid@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232430, 0x0, true, 0x857567b7c49b3c6c)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232450, 0x0, true, 0xf025f4454e5bd357)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232470, 0x0, true, 0x1c6ef152aa28226)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232490, 0x0, true, 0x14e989ebef613170)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetVirtualFunctionPowerState@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2326a0, 0x0, true, 0x12d1b8c1b893a33c)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2326c0, 0x0, true, 0x6e2f5a712ac4bcfd)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232960, 0x0, true, 0x6a77f40bf93e1028)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x232980, 0x0, true, 0xce71aee17671c435)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP$dxgkrnl.sys", 0x2329a0, 0x0, true, 0xe19a86130f9a7018)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#endif