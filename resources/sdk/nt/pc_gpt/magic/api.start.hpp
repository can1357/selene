#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreatePartitionTable@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0x8cadc60da0bafac2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadEntries@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0xc32695e03a904d27)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadHeader@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0x9ca959f0d9acf8e5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadPartitionTable@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0xb55aa848430d68b2)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPartition@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0x96aadaf7dfe76546)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VerifyPartitionTable@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0xf696370a6adb486b)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WritePartitionTable@PC_GPT$ntoskrnl.exe", 0x0, 0x0, false, 0xe83fa0143ef15702)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif