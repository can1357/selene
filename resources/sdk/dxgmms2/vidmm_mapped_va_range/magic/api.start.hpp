#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ$dxgmms2.sys", 0x0, 0x0, false, 0xaf6a461448965f8a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z$dxgmms2.sys", 0x2c48, 0x0, true, 0xc6d082c2d51be0b6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE$dxgmms2.sys", 0x23ac8, 0x0, true, 0x1248f41163715e1b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif