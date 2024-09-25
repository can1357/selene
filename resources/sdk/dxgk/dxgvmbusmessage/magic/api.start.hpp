#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGVMBUSMESSAGE@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xae719ec98c10dab4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeMessage@DXGVMBUSMESSAGE$dxgkrnl.sys", 0x0, 0x0, false, 0xdda1ee073d71a7af)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif