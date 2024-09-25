#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::event_entry_t*, 32>), "EVENT_ENTRY_LOOKUP_TABLE.EntryBuckets", entry_buckets, 0x0, 0x0, true, 0x6356ef5cc659e14d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EVENT_ENTRY_LOOKUP_TABLE.NumEventEntries", num_event_entries, 0x800, 0x20, true, 0x335eba21f3c645a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EVENT_ENTRY_LOOKUP_TABLE.NextBucketToFlush", next_bucket_to_flush, 0x820, 0x20, true, 0x19713f5a48fd483b)
#else
#define _m00
#define _m01
#define _m02
#endif