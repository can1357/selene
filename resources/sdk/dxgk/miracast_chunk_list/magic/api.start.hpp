#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddChunkListToTail@MIRACAST_CHUNK_LIST$dxgkrnl.sys", 0x50428, 0x0, true, 0x5238f473b00e637e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateNewChunks@MIRACAST_CHUNK_LIST$dxgkrnl.sys", 0x504a0, 0x0, true, 0x17b070018e7b2953)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveHead@MIRACAST_CHUNK_LIST$dxgkrnl.sys", 0x5087c, 0x0, true, 0xd3c3640de73981f2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif