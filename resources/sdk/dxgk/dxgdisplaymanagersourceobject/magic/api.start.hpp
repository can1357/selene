#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z$dxgkrnl.sys", 0x2ab9c0, 0x0, true, 0xba63250ff5e529aa)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsValid@DXGDISPLAYMANAGERSOURCEOBJECT$dxgkrnl.sys", 0x2ac438, 0x0, true, 0xc4adb7b5a466d163)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ$dxgkrnl.sys", 0x2aba5c, 0x0, true, 0x8fd0b797c7b52889)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT$dxgkrnl.sys", 0x2ac29c, 0x0, true, 0x8b6355d46070dd07)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT$dxgkrnl.sys", 0x2ac7dc, 0x0, true, 0xd486785767295b55)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif