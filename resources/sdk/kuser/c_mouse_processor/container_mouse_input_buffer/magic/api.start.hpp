#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor$win32kbase.sys", 0x1c6570, 0x0, true, 0x225411aa7223cd98)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor$win32kbase.sys", 0x1c75bc, 0x0, true, 0xff662f110ace0dfe)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor$win32kbase.sys", 0x1c9424, 0x0, true, 0x1a0583a649252cb2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif