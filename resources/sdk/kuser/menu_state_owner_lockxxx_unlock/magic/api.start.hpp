#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z$win32kfull.sys", 0x1e04b4, 0x0, true, 0x1bd168c23ec76870)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ$win32kfull.sys", 0x1e0518, 0x0, true, 0xd5042b5110a055ac)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif