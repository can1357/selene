#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z$win32kbase.sys", 0x6a91c, 0x0, true, 0x5cb5c0e6d665f8e4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CThreadLockInputDest@@QEAA@XZ$win32kbase.sys", 0x6a704, 0x0, true, 0x2f16d219cd7b127)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif