#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_SUBSEGMENT_ALLOC_FREE.HeapHandle", heap_handle, 0x0, 0x40, true, 0x4549bab8fa06a9f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_EVENT_SUBSEGMENT_ALLOC_FREE.SubSegment", sub_segment, 0x40, 0x40, true, 0xc7073f65193674a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_EVENT_SUBSEGMENT_ALLOC_FREE.SubSegmentSize", sub_segment_size, 0x80, 0x40, true, 0xf78c912dac4d106e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_EVENT_SUBSEGMENT_ALLOC_FREE.BlockSize", block_size, 0xc0, 0x40, true, 0x1787724fc5682d0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif