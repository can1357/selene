#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VideoPortCallout$win32kbase.sys", 0x12c8a0, 0x0, true, 0xa77241050c90876b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VideoPortCalloutThread$win32kbase.sys", 0x12d2d4, 0x0, true, 0xc4c26c66acbdb6b8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VideoMemoryBudgetCallback$dxgi.dll", 0x71870, 0x0, true, 0xa002b84e428d020)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif