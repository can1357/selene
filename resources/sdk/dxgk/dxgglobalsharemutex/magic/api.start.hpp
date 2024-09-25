#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGGLOBALSHAREMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x7384, 0x0, true, 0x19a8821dc3846c9e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGGLOBALSHAREMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6980, 0x0, true, 0x7bc0b53564cc7f4f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif