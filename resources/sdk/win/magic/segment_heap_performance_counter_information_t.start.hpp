#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.SegmentReserveSize", segment_reserve_size, 0x0, 0x40, true, 0xe2c784e578bd6254)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.SegmentCommitSize", segment_commit_size, 0x40, 0x40, true, 0xb4fafaeeec571729)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.SegmentCount", segment_count, 0x80, 0x40, true, 0xa1577f39f2967102)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.AllocatedSize", allocated_size, 0xc0, 0x40, true, 0xe143da3479ede461)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.LargeAllocReserveSize", large_alloc_reserve_size, 0x100, 0x40, true, 0xacbc51ff421f6f31)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT_HEAP_PERFORMANCE_COUNTER_INFORMATION.LargeAllocCommitSize", large_alloc_commit_size, 0x140, 0x40, true, 0xac1d5fd297cf0a97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif