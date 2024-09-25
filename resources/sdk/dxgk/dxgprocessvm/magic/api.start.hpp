#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FlushDevicesForTermination@DXGPROCESSVM$dxgkrnl.sys", 0x0, 0x0, false, 0x814ace9c7a684ad0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z$dxgkrnl.sys", 0x45d48, 0x0, true, 0x9fd86793e1be93d2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSVM@@UEAA@XZ$dxgkrnl.sys", 0x45dd8, 0x0, true, 0xfbc22de192c475c6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVmProcess@DXGPROCESSVM$dxgkrnl.sys", 0x27f1ac, 0x0, true, 0xf8a9f72a9e769c7b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetVmProcessName@DXGPROCESSVM$dxgkrnl.sys", 0x280cf4, 0x0, true, 0xccab3fc2c18f176d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif