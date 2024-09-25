#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGUSERCRIT$dxgkrnl.sys", 0xb3f8, 0x0, true, 0x1690741584bf0212)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x24494, 0x0, true, 0x9322d63a570501c5)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGUSERCRIT@@QEAA@XZ$dxgkrnl.sys", 0x24504, 0x0, true, 0x79b6c4c1f80e911c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif