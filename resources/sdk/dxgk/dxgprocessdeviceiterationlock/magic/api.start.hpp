#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x70e656863637895f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xc111c48e7859daa2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif