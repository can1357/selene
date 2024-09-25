#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddReference@DXGSHAREDVMOBJECT$dxgkrnl.sys", 0x232b20, 0x0, true, 0xd63cef23757cd71d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGSHAREDVMOBJECT@@AEAA@XZ$dxgkrnl.sys", 0x3e100, 0x0, true, 0x1fafdf0662a5830e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXGSHAREDVMOBJECT$dxgkrnl.sys", 0x235bfc, 0x0, true, 0x8fe3d331789e0b9a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif