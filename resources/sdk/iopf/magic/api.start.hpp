#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IopfCallDriver$ntoskrnl.exe", 0x36d384, 0x0, true, 0x33ae03740c4a30b1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IopfCompleteRequest$ntoskrnl.exe", 0x248740, 0x0, true, 0x53a2e12383fa2175)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif