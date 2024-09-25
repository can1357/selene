#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInstance@CDesktopInputSink$win32kbase.sys", 0x0, 0x0, false, 0x31114e6a0ebbaf11)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTransform@CDesktopInputSink$win32kbase.sys", 0x0, 0x0, false, 0x5fe6beb5712f1d49)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsEqualByLuid@CDesktopInputSink$win32kbase.sys", 0x0, 0x0, false, 0x1c80de819cd97780)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Set@CDesktopInputSink$win32kbase.sys", 0x0, 0x0, false, 0xd1ee3069bd8c42f6)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetDesktopInputSink@CDesktopInputSink$win32kbase.sys", 0x0, 0x0, false, 0x9471c0247748f74e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif