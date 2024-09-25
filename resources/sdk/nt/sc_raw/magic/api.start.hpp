#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePartitionTable@SC_RAW$ntoskrnl.exe", 0x5c2f84, 0x0, true, 0xe193434460cb7209)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPartitionTable@SC_RAW$ntoskrnl.exe", 0x5c3054, 0x0, true, 0xfb246b3618f666c0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif