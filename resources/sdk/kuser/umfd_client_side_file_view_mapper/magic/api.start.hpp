#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z$win32kfull.sys", 0x297a0c, 0x0, true, 0x7a4e9adfb8021715)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TryMapAllFileViews@UmfdClientSideFileViewMapper$win32kfull.sys", 0x2a7de4, 0x0, true, 0x8680812e4c7388d9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif