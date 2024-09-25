#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCurrent@CTopologyManager$win32kbase.sys", 0x0, 0x0, false, 0x55755f855086a3b8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDriverUnload@CTopologyManager$win32kbase.sys", 0x0, 0x0, false, 0x8515b9aadb0185e8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateCurrent@CTopologyManager$win32kbase.sys", 0x0, 0x0, false, 0x8113cc9de8a66f47)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif