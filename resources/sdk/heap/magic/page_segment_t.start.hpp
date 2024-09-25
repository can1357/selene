#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_PAGE_SEGMENT.ListEntry", list_entry, 0x0, 0x80, true, 0xde3751492c116f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PAGE_SEGMENT.Signature", signature, 0x80, 0x40, true, 0xbfc119b904d365c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union heap::segment_mgr_commit_state_t*), "_HEAP_PAGE_SEGMENT.SegmentCommitState", segment_commit_state, 0xc0, 0x40, true, 0x3fd35840f6859384)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_PAGE_SEGMENT.UnusedWatermark", unused_watermark, 0x100, 0x8, true, 0x4bc16a6ad9d5f86f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::page_range_descriptor_t, 256>), "_HEAP_PAGE_SEGMENT.DescArray", desc_array, 0x0, 0x0, true, 0x27ab982faf642c75)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif