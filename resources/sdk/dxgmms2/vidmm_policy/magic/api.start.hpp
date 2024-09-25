#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Set@VIDMM_POLICY$dxgmms2.sys", 0x0, 0x0, false, 0x7e335433deda0b7a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_POLICY@@QEAA@XZ$dxgmms2.sys", 0xaeb34, 0x0, true, 0x4282500f6032a5ff)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsActive@VIDMM_POLICY$dxgmms2.sys", 0x61948, 0x0, true, 0x98296f533d8f4e18)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif