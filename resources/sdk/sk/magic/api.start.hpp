#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SkIsSecureKernel$ntoskrnl.exe", 0x3cbe40, 0x0, true, 0x2af93a542059d7a1)
#else
#define _m0(...) __VA_ARGS__
#endif