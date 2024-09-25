#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpRegOpenKey$ntoskrnl.exe", 0x0, 0x0, false, 0x366cec3c94fb7e3f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpRegOpenRedirectedKey$ntoskrnl.exe", 0x0, 0x0, false, 0xcc38d9f8b4413d8c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpCreateSurface$win32kfull.sys", 0x111788, 0x0, true, 0xdd0f4abbc0cb8743)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpAlphaBlend$win32kfull.sys", 0x103a60, 0x0, true, 0x574da619f934dd81)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpBitBlt$win32kfull.sys", 0x97a10, 0x0, true, 0xf52c577f2fe86a1c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpCopyBits$win32kfull.sys", 0x9a690, 0x0, true, 0x21e20ee37d4cfa8a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpDdCreateFullscreenSprite$win32kfull.sys", 0x26e35c, 0x0, true, 0x763dd376e9537d9f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpDdDestroyFullscreenSprite$win32kfull.sys", 0x26e92c, 0x0, true, 0x8734672bb4f7becd)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpDdNotifyFullscreenSpriteUpdate$win32kfull.sys", 0x26ea64, 0x0, true, 0x31850c35f89de001)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpDrawStream$win32kfull.sys", 0x27f750, 0x0, true, 0x5584e3c8899e4333)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpFillPath$win32kfull.sys", 0x27f930, 0x0, true, 0x1ba834be49c1e363)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpGradientFill$win32kfull.sys", 0x144c70, 0x0, true, 0xf8faf76ba2dc4164)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpLineTo$win32kfull.sys", 0x141990, 0x0, true, 0x6ba2e59d00fc5b93)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpNotifyLSurface$win32kfull.sys", 0xd07b0, 0x0, true, 0x4a7a7e5ce401423b)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpNotifyLSurfaceRedirSurfAssoc$win32kfull.sys", 0xd06e4, 0x0, true, 0xbb4f6fa26a45b756)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpNotifyLSurfaceTracking$win32kfull.sys", 0x26ec30, 0x0, true, 0x1c06d98f2b3cb23d)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpPlgBlt$win32kfull.sys", 0x27fdd0, 0x0, true, 0x28573cb24c2a4461)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpRenderHint$win32kfull.sys", 0xcf2e8, 0x0, true, 0x940147908dc7fdd3)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpSaveScreenBits$win32kfull.sys", 0x280250, 0x0, true, 0xcb13dee84c4c0ffa)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpStretchBlt$win32kfull.sys", 0x147580, 0x0, true, 0xaa264216a78c2b0f)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpStretchBltROP$win32kfull.sys", 0x147120, 0x0, true, 0xc85cb533961110f8)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpStrokeAndFillPath$win32kfull.sys", 0x132820, 0x0, true, 0xc0e97ac996c3767e)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpStrokePath$win32kfull.sys", 0x134790, 0x0, true, 0x15535fd31257e944)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpTextOut$win32kfull.sys", 0x96e70, 0x0, true, 0xd0ed98b6079197ef)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpTransparentBlt$win32kfull.sys", 0x1036e0, 0x0, true, 0x6b84aba4483d5cc3)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpVerifierInitialization$storport.sys", 0x7986c, 0x0, true, 0x8146ea491802bed)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SpVrfyLevel$storport.sys", 0x67e38, 0x0, true, 0x4965dbfe3da93884)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#define _o3(...) __VA_ARGS__
#define _o4(...) __VA_ARGS__
#define _o5(...) __VA_ARGS__
#define _o6(...) __VA_ARGS__
#endif