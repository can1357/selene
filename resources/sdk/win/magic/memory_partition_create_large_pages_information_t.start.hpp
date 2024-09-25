#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xb0fdfdf75f6c04c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION.NumaNode", numa_node, 0x20, 0x20, true, 0xccfad46863190db2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION.LargePageSize", large_page_size, 0x40, 0x40, true, 0x567b3bc694c6756e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION.NumberOfLargePagesToCreate", number_of_large_pages_to_create, 0x80, 0x40, true, 0xce0b5981290c671)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_CREATE_LARGE_PAGES_INFORMATION.NumberOfLargePagesCreated", number_of_large_pages_created, 0xc0, 0x40, true, 0x8b4039578e9b4759)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif