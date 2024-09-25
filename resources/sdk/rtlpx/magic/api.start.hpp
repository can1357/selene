#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlpxVirtualUnwind$ntoskrnl.exe", 0x32d990, 0x0, true, 0x98b2031a40f696ed)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RtlpxLookupFunctionTable$ntoskrnl.exe", 0x32e3d0, 0x0, true, 0x6322378f26ac6002)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif