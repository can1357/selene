#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Reset@CBatchSharedMemoryPool@DirectComposition$win32kbase.sys", 0xce6c, 0x0, true, 0xbc6de0d6a13cf064)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition$win32kbase.sys", 0xa474, 0x0, true, 0x911c3f20f9e7d755)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Create@CBatchSharedMemoryPool@DirectComposition$win32kbase.sys", 0x81c60, 0x0, true, 0x8f6706c7869eeff2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition$win32kbase.sys", 0x84198, 0x0, true, 0x94a1c0525b845e2c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition$win32kbase.sys", 0xce94, 0x0, true, 0xa21781dfe9929439)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UseSpace@CBatchSharedMemoryPool@DirectComposition$win32kbase.sys", 0xa3b4, 0x0, true, 0xbec4140b627833f7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif