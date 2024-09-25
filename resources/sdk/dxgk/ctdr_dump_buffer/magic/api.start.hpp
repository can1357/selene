#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddSegment@CTDR_DUMP_BUFFER$dxgkrnl.sys", 0x25ebb8, 0x0, true, 0xa7b6cd4aa4fee1fe)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z$dxgkrnl.sys", 0x25ea10, 0x0, true, 0x4995983458900b6b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShrinkLastSegment@CTDR_DUMP_BUFFER$dxgkrnl.sys", 0x25f29c, 0x0, true, 0xce7ec0f003e7e7a7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif