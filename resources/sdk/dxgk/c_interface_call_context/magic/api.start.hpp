#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInterfaceCallContext@@QEAA@PEAX@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x2e61f6d3fe87beee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x2367f5513bad6bb4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z$dxgkrnl.sys", 0x4e57c, 0x0, true, 0x81080f175dd7143e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CInterfaceCallContext@@QEAA@XZ$dxgkrnl.sys", 0x4e6a4, 0x0, true, 0x7ce9f66408d05e7e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif