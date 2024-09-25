#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePartitionTable@PC_MBR$ntoskrnl.exe", 0x0, 0x0, false, 0x5bd637986cdf6532)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@PC_MBR$ntoskrnl.exe", 0x0, 0x0, false, 0x177a94199e24137)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPartitionTable@PC_MBR$ntoskrnl.exe", 0x0, 0x0, false, 0xb7c22f2273d357a8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPartition@PC_MBR$ntoskrnl.exe", 0x0, 0x0, false, 0x9a68e1f9142e02a2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WritePartitionTable@PC_MBR$ntoskrnl.exe", 0x0, 0x0, false, 0xcefd149db87b5620)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif