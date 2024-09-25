#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddBindContext@BindState@Ndis$ndis.sys", 0x10307c, 0x0, true, 0x6769dc10e8e691cb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetActualBindingState@BindState@Ndis$ndis.sys", 0x1229e4, 0x0, true, 0xe39ef74e479fa5e8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBindContext@BindState@Ndis$ndis.sys", 0x1028e0, 0x0, true, 0xf7724cee0543af93)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsAlive@BindState@Ndis$ndis.sys", 0x1229fc, 0x0, true, 0xd56758675cd4f84e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveBindContext@BindState@Ndis$ndis.sys", 0x122a18, 0x0, true, 0x46dd18624f9a1985)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetBinding@BindState@Ndis$ndis.sys", 0xfd4a4, 0x0, true, 0x3077233af4df0742)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPause@BindState@Ndis$ndis.sys", 0xfd52c, 0x0, true, 0x84a15596d88912a4)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetSource@BindState@Ndis$ndis.sys", 0x103628, 0x0, true, 0xaefcae5292b55236)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif