#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@ExecutionContextKnobCollection$ndis.sys", 0x0, 0x0, false, 0x6177b3d2f0d5b1bc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadKnobFromKey@ExecutionContextKnobCollection$ndis.sys", 0x0, 0x0, false, 0x610d079ade6c8b22)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif