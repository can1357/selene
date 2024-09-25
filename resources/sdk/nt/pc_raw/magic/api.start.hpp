#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePartitionTable@PC_RAW$ntoskrnl.exe", 0x0, 0x0, false, 0x11831f0eb5ff47f0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPartitionTable@PC_RAW$ntoskrnl.exe", 0x0, 0x0, false, 0x23aa1b3b385025bf)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif