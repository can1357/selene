#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Delete@CWindowProp$win32kfull.sys", 0x0, 0x0, false, 0xf4be16f30c2dcdd0)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveAndDeleteProp@CWindowProp$win32kfull.sys", 0xce080, 0x0, true, 0xe88a86402fa1e36c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetProp@CWindowProp$win32kfull.sys", 0xcf718, 0x0, true, 0xcf5e157692bd3dec)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif