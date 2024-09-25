#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgpInsertDebugPrintCallback$ntoskrnl.exe", 0x57f5f4, 0x0, true, 0xd3edd5a869f85135)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DbgpRemoveDebugPrintCallback$ntoskrnl.exe", 0x57f74c, 0x0, true, 0x749e7db52b8465a2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif