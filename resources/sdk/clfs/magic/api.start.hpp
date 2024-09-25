#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CLFS_LSN_INVALID_EXT$ntoskrnl.exe", 0x1cba8, 0x0, true, 0xd5af33ad8fc55ce3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CLFS_LSN_NULL_EXT$ntoskrnl.exe", 0x1e210, 0x0, true, 0x12e4700a451b5969)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif