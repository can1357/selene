#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VirtualizeKeyboardInput@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c47c0, 0x0, true, 0xe300015b5e8df161)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver$win32kbase.sys", 0x1c46f4, 0x0, true, 0x96aacae669128f73)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif