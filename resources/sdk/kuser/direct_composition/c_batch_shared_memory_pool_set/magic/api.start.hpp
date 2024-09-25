#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition$win32kbase.sys", 0xa3e4, 0x0, true, 0x7723648afb011fe)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition$win32kbase.sys", 0x812b8, 0x0, true, 0xc1df2939de38aded)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReservePools@CBatchSharedMemoryPoolSet@DirectComposition$win32kbase.sys", 0x81be0, 0x0, true, 0xc75be8aaf0659b72)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition$win32kbase.sys", 0x7e914, 0x0, true, 0xe6173327c48b20e3)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition$win32kbase.sys", 0xa374, 0x0, true, 0xf63c537242c91fca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif