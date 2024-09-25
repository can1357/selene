#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA$dxgkrnl.sys", 0x156098, 0x0, true, 0xe46d0f88ec4e4ecd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ$dxgkrnl.sys", 0x113324, 0x0, true, 0x49a5732bf168b6c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA$dxgkrnl.sys", 0x27fe90, 0x0, true, 0xb151478a49e2f8d0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif