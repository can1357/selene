#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z$win32kfull.sys", 0xf21d4, 0x0, true, 0x2fbb37e1c390f663)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepareUsermodeFontObj@FontDriverDdiRequest$win32kfull.sys", 0x3cbe4, 0x0, true, 0x7b210bc7267fcafe)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CaptureUsermodeFontObj@FontDriverDdiRequest$win32kfull.sys", 0x9e148, 0x0, true, 0x1f1dfd892a530b6c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif