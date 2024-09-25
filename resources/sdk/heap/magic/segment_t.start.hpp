#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t), "_HEAP_SEGMENT.Entry", entry, 0x0, 0x80, true, 0x9ea0fd68192374f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SEGMENT.SegmentSignature", segment_signature, 0x80, 0x20, true, 0xde3259e92982f37a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SEGMENT.SegmentFlags", segment_flags, 0xa0, 0x20, true, 0x1cc0c068d50ea425)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_SEGMENT.SegmentListEntry", segment_list_entry, 0xc0, 0x80, true, 0x6f843319faa68789)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::heap_t*), "_HEAP_SEGMENT.Heap", heap, 0x140, 0x40, true, 0x7fdfb6ad61be157)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SEGMENT.BaseAddress", base_address, 0x180, 0x40, true, 0xeeeca91f592307f8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SEGMENT.NumberOfPages", number_of_pages, 0x1c0, 0x20, true, 0xed287d054ad1f190)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t*), "_HEAP_SEGMENT.FirstEntry", first_entry, 0x200, 0x40, true, 0xbe27ad8a21c3e80d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::entry_t*), "_HEAP_SEGMENT.LastValidEntry", last_valid_entry, 0x240, 0x40, true, 0xb727175e249b1649)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SEGMENT.NumberOfUnCommittedPages", number_of_un_committed_pages, 0x280, 0x20, true, 0x62f7e58befe1b73b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SEGMENT.NumberOfUnCommittedRanges", number_of_un_committed_ranges, 0x2a0, 0x20, true, 0x2ce5770669ce9d58)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_SEGMENT.SegmentAllocatorBackTraceIndex", segment_allocator_back_trace_index, 0x2c0, 0x10, true, 0x960cda44b2146c59)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_SEGMENT.UCRSegmentList", ucr_segment_list, 0x300, 0x80, true, 0x42523e031f3fb4d0)
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
#endif