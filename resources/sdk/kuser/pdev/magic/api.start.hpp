#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Allocate@PDEV$win32kbase.sys", 0xb7160, 0x0, true, 0xbb17d07a26f84c17)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DecrementClientReferenceCount@PDEV$win32kbase.sys", 0x40900, 0x0, true, 0xf4acd20cc865d9e1)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Free@PDEV$win32kbase.sys", 0x43b80, 0x0, true, 0x4a8dcb7340235ed5)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IncrementClientReferenceCount@PDEV$win32kbase.sys", 0x408d0, 0x0, true, 0xd0c5f7ec45932e68)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeClientReferenceCount@PDEV$win32kbase.sys", 0xc79c0, 0x0, true, 0xc28a76947a6de8f4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif