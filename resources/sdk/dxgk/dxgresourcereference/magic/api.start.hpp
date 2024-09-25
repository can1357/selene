#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Assign@DXGRESOURCEREFERENCE$dxgkrnl.sys", 0x0, 0x0, false, 0x9d4b556942cac5a8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MoveAssign@DXGRESOURCEREFERENCE$dxgkrnl.sys", 0x120d44, 0x0, true, 0xb03f1ae2d5be8dc2)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z$dxgkrnl.sys", 0x109298, 0x0, true, 0xe90bb0f4917c5d1b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGRESOURCEREFERENCE@@QEAA@XZ$dxgkrnl.sys", 0x157bd0, 0x0, true, 0x9d7625ca675702b9)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGRESOURCEREFERENCE@@QEAA@XZ$dxgkrnl.sys", 0x109240, 0x0, true, 0xe7489b4159142dc1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif