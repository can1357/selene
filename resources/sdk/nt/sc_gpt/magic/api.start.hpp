#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePartitionTable@SC_GPT$ntoskrnl.exe", 0x5c1ae4, 0x0, true, 0xba36edcab283ae50)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadEntries@SC_GPT$ntoskrnl.exe", 0x5c1b74, 0x0, true, 0xabce40250cdac828)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadHeader@SC_GPT$ntoskrnl.exe", 0x5c1c94, 0x0, true, 0xf640ffc544086e1f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPartitionTable@SC_GPT$ntoskrnl.exe", 0x5c1d8c, 0x0, true, 0x349f646758880844)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPartition@SC_GPT$ntoskrnl.exe", 0x5c1fe8, 0x0, true, 0xd02e468e97042216)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VerifyPartitionTable@SC_GPT$ntoskrnl.exe", 0x5c20d4, 0x0, true, 0xe940043946badb40)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WritePartitionTable@SC_GPT$ntoskrnl.exe", 0x5c23a8, 0x0, true, 0x8fe9d05d0164c510)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif