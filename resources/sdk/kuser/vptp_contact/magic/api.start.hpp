#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z$win32kbase.sys", 0x0, 0x0, false, 0x549c61fde4cdb194)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VPTPContact@@QEAA@XZ$win32kbase.sys", 0x0, 0x0, false, 0x7f1bfdd1fe32d958)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif