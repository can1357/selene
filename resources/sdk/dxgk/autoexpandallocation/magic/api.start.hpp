#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1AUTOEXPANDALLOCATION@@QEAA@XZ$dxgkrnl.sys", 0x14cec8, 0x0, true, 0x2cce2a543b525a38)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetActualBufferSize@AUTOEXPANDALLOCATION$dxgkrnl.sys", 0x1582a8, 0x0, true, 0x4ed6f1fbc2eb288a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBuffer@AUTOEXPANDALLOCATION$dxgkrnl.sys", 0x157b3c, 0x0, true, 0x16e7ae0f61251470)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif