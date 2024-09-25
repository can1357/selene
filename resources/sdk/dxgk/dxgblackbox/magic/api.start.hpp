#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGBLACKBOX@@QEAA@XZ$dxgkrnl.sys", 0x17c14c, 0x0, true, 0x883ce02d9686631c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGBLACKBOX@@QEAA@XZ$dxgkrnl.sys", 0x2b6d94, 0x0, true, 0x6ab55427449e5d2f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGBLACKBOX$dxgkrnl.sys", 0x17b53c, 0x0, true, 0x4d6daeb5c1fbbf81)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reserve@DXGBLACKBOX$dxgkrnl.sys", 0x2b6dbc, 0x0, true, 0x364504fc318e886f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif