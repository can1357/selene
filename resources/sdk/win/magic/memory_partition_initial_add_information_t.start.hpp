#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_INITIAL_ADD_INFORMATION.Flags", flags, 0x0, 0x20, true, 0x206386e9229bd7ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_INITIAL_ADD_INFORMATION.NumberOfRanges", number_of_ranges, 0x20, 0x20, true, 0x49e795f8c72f326c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_INITIAL_ADD_INFORMATION.NumberOfPagesAdded", number_of_pages_added, 0x40, 0x40, true, 0xa71258b69cfc1059)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::memory_partition_page_range_t, 1>), "_MEMORY_PARTITION_INITIAL_ADD_INFORMATION.PartitionRanges", partition_ranges, 0x80, 0x80, true, 0x8047d554d1b4a9a1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_MEMORY_PARTITION_INITIAL_ADD_INFORMATION.DedicatedMemoryAttributes", dedicated_memory_attributes, 0x0, 0x0, false, 0x6e234f7371bc25e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif