#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcpiRootPdo$ntoskrnl.exe", 0xc507f0, 0x0, true, 0xb0afc17d55a6186c)
#else
#define _m0(...) __VA_ARGS__
#endif