#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z$win32kfull.sys", 0x27ba84, 0x0, true, 0xd23372684814cfe9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ$win32kfull.sys", 0x27bbf8, 0x0, true, 0x18160c5262a82cdc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vConstructor@DEVLOCKOBJ_WNDOBJ$win32kfull.sys", 0x27c878, 0x0, true, 0x80604c3f0b17c945)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif