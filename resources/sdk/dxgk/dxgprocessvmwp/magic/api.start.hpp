#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetVirtualMachine@DXGPROCESSVMWP$dxgkrnl.sys", 0x0, 0x0, false, 0xdff7251d4d61b9c1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DecrementNumVmProcesses@DXGPROCESSVMWP$dxgkrnl.sys", 0x45f58, 0x0, true, 0x1ff5bcd6ab84b26d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSVMWP@@UEAA@XZ$dxgkrnl.sys", 0x45e1c, 0x0, true, 0x5c321df20ceafba0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeVmwpProcess@DXGPROCESSVMWP$dxgkrnl.sys", 0x28009c, 0x0, true, 0xaae2658cc7e0bcbb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif