#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenV2InterfaceKey@BindStack@Ndis$ndis.sys", 0x0, 0x0, false, 0x8d9392718e0213bb)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ParseV1FilterString@BindStack@Ndis$ndis.sys", 0x0, 0x0, false, 0x374dfca47bd91db5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadV1FilterList@BindStack@Ndis$ndis.sys", 0x0, 0x0, false, 0xdd736cbf1d804bc5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadV1InterfaceBindings@BindStack@Ndis$ndis.sys", 0x0, 0x0, false, 0xc66aceeff3e63ee3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadV1OrV2ProtocolList@BindStack@Ndis$ndis.sys", 0x0, 0x0, false, 0xc63188e82f62f85)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddStaticFilterBinding@BindStack@Ndis$ndis.sys", 0x102acc, 0x0, true, 0x82b431612e1d06ad)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddStaticProtocolBinding@BindStack@Ndis$ndis.sys", 0x102dbc, 0x0, true, 0x8f7d885dfc76c8b8)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BuildFilterLink@BindStack@Ndis$ndis.sys", 0x102b50, 0x0, true, 0xb268decf324930ee)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BuildProtocolLink@BindStack@Ndis$ndis.sys", 0x102fac, 0x0, true, 0xf218964f38c9648)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateDynamicBinding@BindStack@Ndis$ndis.sys", 0x1233a0, 0x0, true, 0xa48d685f067f235f)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadV2InterfaceBindings@BindStack@Ndis$ndis.sys", 0x109934, 0x0, true, 0x6257a4e20307bce2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#endif