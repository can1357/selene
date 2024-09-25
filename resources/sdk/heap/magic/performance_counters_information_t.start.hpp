#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.Size", size, 0x0, 0x20, true, 0x4758029204547986)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.Version", version, 0x20, 0x20, true, 0x76502d8dbde3c2fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.HeapIndex", heap_index, 0x40, 0x20, true, 0x490d62e3bd2b23b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.LastHeapIndex", last_heap_index, 0x60, 0x20, true, 0xab1094ae1d460139)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.BaseAddress", base_address, 0x80, 0x40, true, 0xb64a1dc7663d1ccb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.ReserveSize", reserve_size, 0xc0, 0x40, true, 0x1e31c70cf63175db)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.CommitSize", commit_size, 0x100, 0x40, true, 0xc538fe133cef477c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.SegmentCount", segment_count, 0x140, 0x20, true, 0x6c721399f309e5f0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.LargeUCRMemory", large_ucr_memory, 0x180, 0x40, true, 0x786cde2d8999beec)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.UCRLength", ucr_length, 0x1c0, 0x20, true, 0x1b2abe4fc0cdc541)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.AllocatedSpace", allocated_space, 0x200, 0x40, true, 0x273cebaf1bc43cee)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.FreeSpace", free_space, 0x240, 0x40, true, 0x2f4f3ff5ce3e0909)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.FreeListLength", free_list_length, 0x280, 0x20, true, 0x54a1c83a58d81c6)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.Contention", contention, 0x2a0, 0x20, true, 0x87b41e5d5c6fa8d1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.VirtualBlocks", virtual_blocks, 0x2c0, 0x20, true, 0xea107755df167d64)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.CommitRate", commit_rate, 0x2e0, 0x20, true, 0x29a6e33942f4aa2e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.DecommitRate", decommit_rate, 0x300, 0x20, true, 0x7e1b7d76fc92bf8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(segment_heap_performance_counter_information_t ), "_HEAP_PERFORMANCE_COUNTERS_INFORMATION.SegmentHeapPerfInformation", segment_heap_perf_information, 0x340, 0x80, true, 0x141ea6932f3742da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif