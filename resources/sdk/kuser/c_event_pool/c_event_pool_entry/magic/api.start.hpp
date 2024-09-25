#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CEventPoolEntry@CEventPool$win32kfull.sys", 0x10b5dc, 0x0, true, 0xa5340701c7b4d445)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Destroy@CEventPoolEntry@CEventPool$win32kfull.sys", 0x1214f4, 0x0, true, 0x9064d359b656b40)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif