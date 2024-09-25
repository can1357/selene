#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireReference@DXGKEYEDMUTEX$dxgkrnl.sys", 0x3e194, 0x0, true, 0xb59575d671e947ff)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeHostHandle@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28b29c, 0x0, true, 0xc6795d29087fe425)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHostHandle@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28b53c, 0x0, true, 0xf4fc6b5e84c79fa4)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetHostHandle@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28c67c, 0x0, true, 0x36ae35fac580d189)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireSync@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28a168, 0x0, true, 0x90a31c404f672616)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyGlobal@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28ada8, 0x0, true, 0x3b1da5968598b8c6)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyHandle@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28aeac, 0x0, true, 0xb5ca3a6357b3acc6)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGKEYEDMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x28a110, 0x0, true, 0xbb5a7a0d15a681d)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyLocal@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28b0a0, 0x0, true, 0x628a995a86f30647)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28b61c, 0x0, true, 0xdda64cb28fba12fa)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsOwner@DXGKEYEDMUTEX$dxgkrnl.sys", 0x466d8, 0x0, true, 0xb6ee945bd9824304)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsSameWaiter@DXGKEYEDMUTEX$dxgkrnl.sys", 0x46718, 0x0, true, 0x1fe007d257c59f3c)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28ba14, 0x0, true, 0x561862942e856d01)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseReference@DXGKEYEDMUTEX$dxgkrnl.sys", 0x3e464, 0x0, true, 0x5deb5ec29080da5a)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseSync@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28c128, 0x0, true, 0x3fb5794b3df6e0eb)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalAbandoned@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28c90c, 0x0, true, 0x72e8295c8f88e472)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalAbandonedInternal@DXGKEYEDMUTEX$dxgkrnl.sys", 0x28c990, 0x0, true, 0x8492ecfb1a48159a)
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
#endif