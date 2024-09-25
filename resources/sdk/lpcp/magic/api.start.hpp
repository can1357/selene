#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcpReplyWaitReplyPort$ntoskrnl.exe", 0x0, 0x0, false, 0xa527dcc712d5265d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcpCopyRequestData$ntoskrnl.exe", 0x8bd3cc, 0x0, true, 0x2c30311861fd095e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LpcpRequestWaitReplyPort$ntoskrnl.exe", 0x8bd69c, 0x0, true, 0x12e991142ca6a71f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif