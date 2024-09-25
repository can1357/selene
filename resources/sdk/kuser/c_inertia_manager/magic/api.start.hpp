#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddInertiaInfo@CInertiaManager$win32kbase.sys", 0x1b0364, 0x0, true, 0x63edb194c69681cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInstance@CInertiaManager$win32kbase.sys", 0x3db0, 0x0, true, 0x9d0ba893443a3f79)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InertiaSourceFromPointerType@CInertiaManager$win32kbase.sys", 0x1b0920, 0x0, true, 0x4fd9ed619563ca7a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InvalidateInertiaInfo@CInertiaManager$win32kbase.sys", 0x3d80, 0x0, true, 0xbe4e9d1f9f562061)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostInertiaMessage@CInertiaManager$win32kbase.sys", 0x1b09b4, 0x0, true, 0x176c162bf420bd8e)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$QueryInertia@CInertiaManager$win32kbase.sys", 0x1b0c50, 0x0, true, 0x6af172d891d6761b)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RouteSyntheticTouchpadToMT@CInertiaManager$win32kbase.sys", 0x1b0e18, 0x0, true, 0xbd981ce3ce850b8f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateInertiaDest@CInertiaManager$win32kbase.sys", 0x1b0f70, 0x0, true, 0x3be1cf8cd5124628)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ValidateInertiaInfo@CInertiaManager$win32kbase.sys", 0x1b0fb4, 0x0, true, 0x6e8e9347b35793c3)
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
#endif