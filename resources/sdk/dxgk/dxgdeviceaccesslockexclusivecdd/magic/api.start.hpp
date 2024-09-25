#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x5fc28757b461164a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x82b8, 0x0, true, 0xef894eeb6c4ef937)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD$dxgkrnl.sys", 0x1951c, 0x0, true, 0x751504e4b9757e05)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif