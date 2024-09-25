#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddTarget@DMMVIDPNTARGETSET$dxgkrnl.sys", 0x10bfc4, 0x0, true, 0xeca4802847d72a94)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z$dxgkrnl.sys", 0xa7dc, 0x0, true, 0x25a76fcb8d6092a2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z$dxgkrnl.sys", 0x91cc, 0x0, true, 0x67acb36ff7dc6933)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DMMVIDPNTARGETSET@@UEAA@XZ$dxgkrnl.sys", 0x99f4, 0x0, true, 0x8e306bacec869756)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetNextTarget@DMMVIDPNTARGETSET$dxgkrnl.sys", 0x5a0f0, 0x0, true, 0xbdbd52a47dc358af)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif