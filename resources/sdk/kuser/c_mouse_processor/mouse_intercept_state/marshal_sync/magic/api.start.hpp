#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeMarshalingEvent@MarshalSync@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x79b00, 0x0, true, 0xce8ad151103fcd6e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor$win32kbase.sys", 0x1c95bc, 0x0, true, 0x5165843879947e48)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif