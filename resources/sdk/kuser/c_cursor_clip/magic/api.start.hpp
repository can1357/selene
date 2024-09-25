#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplyAppClip@CCursorClip$win32kbase.sys", 0x59634, 0x0, true, 0x4146c67a5bb12f66)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplySpeedBumpAndCornerLock@CCursorClip$win32kbase.sys", 0x1aa6b0, 0x0, true, 0x1b256770249ba917)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplySystemClips@CCursorClip$win32kbase.sys", 0x59480, 0x0, true, 0x81d361b85ba02ab0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BoundPoint@CCursorClip$win32kbase.sys", 0x593d0, 0x0, true, 0xd26b26a3d76daede)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BoundPointToRegions@CCursorClip$win32kbase.sys", 0x5952c, 0x0, true, 0x24e9ed7820829110)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearClip@CCursorClip$win32kbase.sys", 0x59690, 0x0, true, 0xbb6a7ec30d05d4ae)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClipPointToRect@CCursorClip$win32kbase.sys", 0x1aa798, 0x0, true, 0x6b3d1c3efdd30738)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EnableSpeedBump@CCursorClip$win32kbase.sys", 0x1aa7d0, 0x0, true, 0x5ef920a6ed7773d5)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetClip@CCursorClip$win32kbase.sys", 0xcc640, 0x0, true, 0x158e961b56e6a61e)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CCursorClip$win32kbase.sys", 0x790e4, 0x0, true, 0x33e2d6884a2901a2)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockCursor@CCursorClip$win32kbase.sys", 0x1aa814, 0x0, true, 0x5feea223315b5206)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnDisplayStateChange@CCursorClip$win32kbase.sys", 0x558f4, 0x0, true, 0x7b1c8473f6afa24e)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OverrideClip@CCursorClip$win32kbase.sys", 0x1aa8fc, 0x0, true, 0x6f071a93f7f41bf3)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetClip@CCursorClip$win32kbase.sys", 0x1aa950, 0x0, true, 0x30598973a582d391)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetShellClip@CCursorClip$win32kbase.sys", 0x1aa9a4, 0x0, true, 0xc91254ca5587b8b7)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TraceCurrentState@CCursorClip$win32kbase.sys", 0x1aab88, 0x0, true, 0xca43faf5095526a2)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateClipRect@CCursorClip$win32kbase.sys", 0x55968, 0x0, true, 0xd5a1423531ab207a)
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