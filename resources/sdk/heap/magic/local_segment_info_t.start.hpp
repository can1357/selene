#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::local_data_t*), "_HEAP_LOCAL_SEGMENT_INFO.LocalData", local_data, 0x0, 0x40, true, 0x6460b9427714ce16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::subsegment_t volatile*), "_HEAP_LOCAL_SEGMENT_INFO.ActiveSubsegment", active_subsegment, 0x40, 0x40, true, 0xe6b81faf74c06fc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct heap::subsegment_t volatile*, 16>), "_HEAP_LOCAL_SEGMENT_INFO.CachedItems", cached_items, 0x80, 0x0, true, 0x748daa10a31d1509)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_HEAP_LOCAL_SEGMENT_INFO.SListHeader", s_list_header, 0x480, 0x80, true, 0xb9c523b80bfd77da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union heap::bucket_counters_t), "_HEAP_LOCAL_SEGMENT_INFO.Counters", counters, 0x500, 0x40, true, 0xa489653c4083d1df)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOCAL_SEGMENT_INFO.LastOpSequence", last_op_sequence, 0x540, 0x20, true, 0x3b813e67c57acfcc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LOCAL_SEGMENT_INFO.BucketIndex", bucket_index, 0x560, 0x10, true, 0xcb65841e247439da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LOCAL_SEGMENT_INFO.LastUsed", last_used, 0x570, 0x10, true, 0x4bbfe48d9f208c3f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LOCAL_SEGMENT_INFO.NoThrashCount", no_thrash_count, 0x580, 0x10, true, 0xe379f1a15cf1226b)
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