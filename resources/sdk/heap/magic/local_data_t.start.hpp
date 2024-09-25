#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_HEAP_LOCAL_DATA.DeletedSubSegments", deleted_sub_segments, 0x0, 0x80, true, 0x6b22c613174a6970)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::lfh_block_zone_t volatile*), "_HEAP_LOCAL_DATA.CrtZone", crt_zone, 0x80, 0x40, true, 0x9ce82d22693c34fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::lfh_heap_t*), "_HEAP_LOCAL_DATA.LowFragHeap", low_frag_heap, 0xc0, 0x40, true, 0x2ec26cebbfe19522)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOCAL_DATA.Sequence", sequence, 0x100, 0x20, true, 0x64875bbb98d0eeba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOCAL_DATA.DeleteRateThreshold", delete_rate_threshold, 0x120, 0x20, true, 0x6fa5b5b74002d81d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif