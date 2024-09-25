#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VhdInitialize$ntoskrnl.exe", 0xa6f758, 0x0, true, 0x861f3a32d30919d3)
#else
#define _m0(...) __VA_ARGS__
#endif