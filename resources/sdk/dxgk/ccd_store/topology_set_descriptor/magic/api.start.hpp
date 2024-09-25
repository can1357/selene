#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0xe4c68, 0x0, true, 0x1aad15a5d486e80f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0xe0c98, 0x0, true, 0xab8eb519756f2664)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0x134798, 0x0, true, 0x558d16b6afca4bb9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0xe4668, 0x0, true, 0x324bc9a1296eba4e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0x138b4c, 0x0, true, 0x4e714a8e7c8a06da)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0x1390d8, 0x0, true, 0x4c38a976793388a5)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0x138df4, 0x0, true, 0xfb9f49e1f1b70f7d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif