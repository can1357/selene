#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrpRmrrTreeAddNewScope$ntoskrnl.exe", 0x4e2aa8, 0x0, true, 0xf9d708e4700f2e90)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DmrpRmrrTreeAddRegionToDevice$ntoskrnl.exe", 0x4e2b48, 0x0, true, 0xe1af51c7c1f17309)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif