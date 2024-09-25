#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpAcquireConsole$ntoskrnl.exe", 0x4f9748, 0x0, true, 0x36c4505ca96c832d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpDisableConsole$ntoskrnl.exe", 0x4f976c, 0x0, true, 0x6f34e13b5c2d5e76)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpLockBgfxCodeSection$ntoskrnl.exe", 0x9f0730, 0x0, true, 0xf6e989493704d62a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpReleaseConsole$ntoskrnl.exe", 0x4f9794, 0x0, true, 0x5a85f029bdcddab5)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpResetDisplay$ntoskrnl.exe", 0x4f97b0, 0x0, true, 0xd6777c96b2694d63)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpTryEnableConsole$ntoskrnl.exe", 0x3993e0, 0x0, true, 0xfb55f3d115cb0276)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpUnlockBgfxCodeSection$ntoskrnl.exe", 0x9ee3f0, 0x0, true, 0xc84097a581afaf52)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BgkpVgaBltRoutine$ntoskrnl.exe", 0x4f9850, 0x0, true, 0xc08997e5398ac2df)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif