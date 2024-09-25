#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Clear@CMarshaledArrayBase@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x95e73f29bd22d31e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Copy@CMarshaledArrayBase@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x1f44fcb00dfa50dc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Marshal@CMarshaledArrayBase@DirectComposition$win32kbase.sys", 0x0, 0x0, false, 0x407f1e4bee7da34b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif