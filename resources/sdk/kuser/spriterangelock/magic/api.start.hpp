#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockExclusive@SPRITERANGELOCK$win32kfull.sys", 0xf1c74, 0x0, true, 0xb635bad159c7140f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockShared@SPRITERANGELOCK$win32kfull.sys", 0xf0e4c, 0x0, true, 0x50d52a1ffe335a72)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@SPRITERANGELOCK$win32kfull.sys", 0x474f8, 0x0, true, 0xf84400cbf05f69c1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif