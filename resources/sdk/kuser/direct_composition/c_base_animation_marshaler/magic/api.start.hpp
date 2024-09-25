#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBaseAnimation@CBaseAnimationMarshaler@DirectComposition$win32kbase.sys", 0xc8730, 0x0, true, 0x70e523542d9e313)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetResourceMarshaler@CBaseAnimationMarshaler@DirectComposition$win32kbase.sys", 0xade00, 0x0, true, 0x5cf1a8235571224e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif