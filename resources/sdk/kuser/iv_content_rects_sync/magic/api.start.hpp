#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BroadcastUpdateToAllContainers@IVContentRectsSync$win32kbase.sys", 0x0, 0x0, false, 0x2e55770b82f82be6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ivOnChildPartitionConnected@IVContentRectsSync$win32kbase.sys", 0x0, 0x0, false, 0x3a12b31bd2820f1f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif