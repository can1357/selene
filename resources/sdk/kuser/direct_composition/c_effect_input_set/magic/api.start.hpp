#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EmitUpdateCommands@CEffectInputSet@DirectComposition$win32kbase.sys", 0x1e7414, 0x0, true, 0x22ad4cb501af1c3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@CEffectInputSet@DirectComposition$win32kbase.sys", 0x1e7560, 0x0, true, 0x4b4dc3de8940e4cf)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetInput@CEffectInputSet@DirectComposition$win32kbase.sys", 0x1e7644, 0x0, true, 0xe5ae00b5115a3224)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif