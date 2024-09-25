#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPointerInfoByPointerId@Pointer$win32kfull.sys", 0x244194, 0x0, true, 0x8ccd140409d6bf7a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPointerInfoByPointerMsgId@Pointer$win32kfull.sys", 0x2441f8, 0x0, true, 0x6da62eb9551940a4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif