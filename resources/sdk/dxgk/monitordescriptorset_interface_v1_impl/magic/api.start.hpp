#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f1620, 0x0, true, 0xf1f38714f86cd5ce)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f1c40, 0x0, true, 0xcd9a8287298429c0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DxgMonitorDescriptorSetInterfaceV1@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0xaedb0, 0x0, true, 0xbd2b4a413fbf2d6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNumDescriptors@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2930, 0x0, true, 0xd7594403473dd068)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL$dxgkrnl.sys", 0x2f2cf0, 0x0, true, 0x2e661f0c0f73857)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif