#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireExclusive@COREADAPTERACCESS$dxgkrnl.sys", 0xae48, 0x0, true, 0x7715ab78dcf069b5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireShared@COREADAPTERACCESS$dxgkrnl.sys", 0x7ab8, 0x0, true, 0x9ed98bf149469db8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z$dxgkrnl.sys", 0x34f0, 0x0, true, 0xadcb012e4a1e59f2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1COREADAPTERACCESS@@QEAA@XZ$dxgkrnl.sys", 0x79d8, 0x0, true, 0x498147cba8ab02b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@COREADAPTERACCESS$dxgkrnl.sys", 0xb74c, 0x0, true, 0x784c1c066112681d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif