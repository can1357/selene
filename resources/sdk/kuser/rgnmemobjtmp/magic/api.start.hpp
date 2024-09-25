#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RGNMEMOBJTMP@@QEAA@K@Z$win32kbase.sys", 0x0, 0x0, false, 0xb46d0a18031e2945)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RGNMEMOBJTMP@@QEAA@XZ$win32kfull.sys", 0x156958, 0x0, true, 0x805f900260d98499)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RGNMEMOBJTMP@@QEAA@H@Z$win32kfull.sys", 0x156d1c, 0x0, true, 0x147cb0bb1afbab6)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z$win32kfull.sys", 0x157170, 0x0, true, 0x382c9a3771a0ebe1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RGNMEMOBJTMP@@QEAA@XZ$win32kfull.sys", 0x45698, 0x0, true, 0x211d44bbb547314b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif