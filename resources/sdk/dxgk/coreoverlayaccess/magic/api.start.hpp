#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@COREOVERLAYACCESS$dxgkrnl.sys", 0x44ad8, 0x0, true, 0x8ade276c7cb52a4c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z$dxgkrnl.sys", 0x44aa4, 0x0, true, 0x87ad57ece6881393)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1COREOVERLAYACCESS@@QEAA@XZ$dxgkrnl.sys", 0x25144, 0x0, true, 0xeed318e237062fd7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif