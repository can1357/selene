#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_INFORMATION_ITEM.Level", level, 0x0, 0x20, true, 0xe21e27c1f26d3abd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION_ITEM.Size", size, 0x40, 0x40, true, 0xf69ed3744c593e9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::process_heap_information_t), "_HEAP_INFORMATION_ITEM.ProcessHeapInformation", process_heap_information, 0x80, 0x0, true, 0xf27280a98b292710)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::information_t), "_HEAP_INFORMATION_ITEM.HeapInformation", heap_information, 0x80, 0x80, true, 0xfb8a5262f3b4608)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::region_information_t), "_HEAP_INFORMATION_ITEM.HeapRegionInformation", heap_region_information, 0x80, 0x40, true, 0x4ed529da8851b80d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::range_information_t), "_HEAP_INFORMATION_ITEM.HeapRangeInformation", heap_range_information, 0x80, 0x40, true, 0x3af1e860f876e976)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::block_information_t), "_HEAP_INFORMATION_ITEM.HeapBlockInformation", heap_block_information, 0x80, 0x40, true, 0x5797478acb2ba47d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::performance_counters_information_t), "_HEAP_INFORMATION_ITEM.HeapPerfInformation", heap_perf_information, 0x80, 0xc0, true, 0x57b1c6c877c26dcc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION_ITEM.DynamicStart", dynamic_start, 0x80, 0x40, true, 0xef400c573ce90b30)
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
#endif