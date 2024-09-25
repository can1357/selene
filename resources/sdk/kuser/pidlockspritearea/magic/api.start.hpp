#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLock@PIDLOCKSPRITEAREA$win32kfull.sys", 0x15486c, 0x0, true, 0xf230edec8dcad8bc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@PIDLOCKSPRITEAREA$win32kfull.sys", 0xf0eac, 0x0, true, 0x774503a707f77404)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif