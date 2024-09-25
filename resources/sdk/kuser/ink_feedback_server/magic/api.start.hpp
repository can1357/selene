#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddInkFeedbackProvider@InkFeedbackServer$win32kfull.sys", 0x125b94, 0x0, true, 0x3f962acb96cd395f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnPointerMessagePosted@InkFeedbackServer$win32kfull.sys", 0x25482c, 0x0, true, 0x57fe0109b974df36)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnThreadExit@InkFeedbackServer$win32kfull.sys", 0xf8bf4, 0x0, true, 0x25593d191ec6b5a5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveInkFeedbackProvider@InkFeedbackServer$win32kfull.sys", 0x120dec, 0x0, true, 0x56d4f1f3ed32d1f1)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RunForAllProviders@InkFeedbackServer$win32kfull.sys", 0x254fd0, 0x0, true, 0x7a9b4f34e8776563)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif