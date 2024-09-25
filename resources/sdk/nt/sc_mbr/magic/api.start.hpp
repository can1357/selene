#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePartitionTable@SC_MBR$ntoskrnl.exe", 0x5c1360, 0x0, true, 0xa21d6843acc84468)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@SC_MBR$ntoskrnl.exe", 0x5c1414, 0x0, true, 0x146cb07178321064)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPartitionTable@SC_MBR$ntoskrnl.exe", 0x5c1478, 0x0, true, 0x2f20367a2a25459e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPartition@SC_MBR$ntoskrnl.exe", 0x5c1768, 0x0, true, 0x4245ff1f3514c21d)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WritePartitionTable@SC_MBR$ntoskrnl.exe", 0x5c1898, 0x0, true, 0x4ae4cfc235f6097c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif