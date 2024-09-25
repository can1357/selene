#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Filter@tagRlsFilter@Prediction$win32kfull.sys", 0x1ec974, 0x0, true, 0x6558bfdd8ccdc3bd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInit@tagRlsFilter@Prediction$win32kfull.sys", 0x1eec0c, 0x0, true, 0xb7a12150c4bab4e1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif