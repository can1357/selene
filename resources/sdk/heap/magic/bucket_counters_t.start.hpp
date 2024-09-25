#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_BUCKET_COUNTERS.TotalBlocks", total_blocks, 0x0, 0x20, true, 0x6ef1d426e582ae08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_BUCKET_COUNTERS.SubSegmentCounts", sub_segment_counts, 0x20, 0x20, true, 0xa6109d8f4f101097)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HEAP_BUCKET_COUNTERS.Aggregate64", aggregate64, 0x0, 0x40, true, 0x90c95b796e30b909)
#else
#define _m00
#define _m01
#define _m02
#endif