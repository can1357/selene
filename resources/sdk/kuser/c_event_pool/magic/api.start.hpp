#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CEventPool$win32kfull.sys", 0x10b590, 0x0, true, 0x85e835d6c9fcc553)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CEventPool$win32kfull.sys", 0x12149c, 0x0, true, 0x4a8c447da3667494)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif