#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_SEGMENT.Magic", magic, 0x0, 0x20, true, 0x1b5c105542181f21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_database_t*), "_RTL_TRACE_SEGMENT.Database", database, 0x40, 0x40, true, 0x4eee2e950baf081b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_segment_t*), "_RTL_TRACE_SEGMENT.NextSegment", next_segment, 0x80, 0x40, true, 0x3302df2330b60e5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_SEGMENT.TotalSize", total_size, 0xc0, 0x40, true, 0x2c3ea974fb33f073)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_RTL_TRACE_SEGMENT.SegmentStart", segment_start, 0x100, 0x40, true, 0xcb5bfcee24025c8f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_RTL_TRACE_SEGMENT.SegmentEnd", segment_end, 0x140, 0x40, true, 0x174fcf42b8981915)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_RTL_TRACE_SEGMENT.SegmentFree", segment_free, 0x180, 0x40, true, 0xfba0a7398da89c87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif