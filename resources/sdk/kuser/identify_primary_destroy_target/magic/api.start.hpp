#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z$win32kfull.sys", 0x0, 0x0, false, 0xab3174980e132cb3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Identify@IdentifyPrimaryDestroyTarget$win32kfull.sys", 0x0, 0x0, false, 0x66fb456353881653)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif