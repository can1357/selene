#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@AUTO_PNPPOWER_LOCK$dxgkrnl.sys", 0x1f318, 0x0, true, 0x48a6387375409660)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z$dxgkrnl.sys", 0x1f2e8, 0x0, true, 0xa356f3419638c567)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@AUTO_PNPPOWER_LOCK$dxgkrnl.sys", 0x1df70, 0x0, true, 0xfab3350da52f49e1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif