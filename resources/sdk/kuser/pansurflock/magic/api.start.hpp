#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z$win32kfull.sys", 0x294ab8, 0x0, true, 0x9121b3dbc2d2fcfd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PANSURFLOCK@@QEAA@XZ$win32kfull.sys", 0x294be8, 0x0, true, 0x218b194f8c604bff)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockBmpAndPrepareForPunt@PANSURFLOCK$win32kfull.sys", 0x296eb4, 0x0, true, 0x27cea2d6597f6cfa)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockShadow@PANSURFLOCK$win32kfull.sys", 0x296f6c, 0x0, true, 0x6077b06204393492)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnLockBmpAndRemovePunt@PANSURFLOCK$win32kfull.sys", 0x297618, 0x0, true, 0x3cdcf002c9c94090)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnLockShadow@PANSURFLOCK$win32kfull.sys", 0x297794, 0x0, true, 0xc18dc788c14474a5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif