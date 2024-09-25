#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MarkInvalid@IDxgkCompositionObject$dxgkrnl.sys", 0x1adc0, 0x0, true, 0x199760c2246d015a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Close@IDxgkCompositionObject$dxgkrnl.sys", 0x1ae10, 0x0, true, 0x495c11d4bda51970)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OkToClose@IDxgkCompositionObject$dxgkrnl.sys", 0x1ae10, 0x0, true, 0x652331beace1ceec)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Open@IDxgkCompositionObject$dxgkrnl.sys", 0x1ae10, 0x0, true, 0x59fa5eccb604c81e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif