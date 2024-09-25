#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "TLG_AGG_INTERNAL_STATS.TotalEntriesFlushed", total_entries_flushed, 0x0, 0x40, true, 0x835609d2cb653482)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "TLG_AGG_INTERNAL_STATS.NumFlushes", num_flushes, 0x40, 0x40, true, 0xee9cf82adbe78090)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGG_INTERNAL_STATS.MaxEntriesStored", max_entries_stored, 0x80, 0x20, true, 0xc8541880357aa071)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGG_INTERNAL_STATS.MaxEntriesFlushed", max_entries_flushed, 0xa0, 0x20, true, 0x1306f4c3a36c2eca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGG_INTERNAL_STATS.MinEntriesFlushed", min_entries_flushed, 0xc0, 0x20, true, 0x1b66a705c101b3d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGG_INTERNAL_STATS.NumBucketLimitReached", num_bucket_limit_reached, 0xe0, 0x20, true, 0x8a5c8cbfbc4f97eb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGG_INTERNAL_STATS.NumAllocationFailures", num_allocation_failures, 0x100, 0x20, true, 0xd97de73247dc8bc6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGG_INTERNAL_STATS.NumLargeEventFailures", num_large_event_failures, 0x120, 0x20, true, 0xd93c8874a555d88b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif