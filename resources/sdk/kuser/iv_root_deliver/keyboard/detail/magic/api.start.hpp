#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c2814, 0x0, true, 0xce7d0acaebb27cfc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c2b20, 0x0, true, 0xc599f18d46e18f82)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SendKeyboardInput@Detail@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c2c94, 0x0, true, 0x71e2c5212344531a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c448c, 0x0, true, 0xd30bde321bb2ac43)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c45b4, 0x0, true, 0xdbcf040805911217)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif