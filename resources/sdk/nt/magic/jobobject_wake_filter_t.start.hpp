#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_WAKE_FILTER.HighEdgeFilter", high_edge_filter, 0x0, 0x20, true, 0x27e3ffddb104168c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_WAKE_FILTER.LowEdgeFilter", low_edge_filter, 0x20, 0x20, true, 0x4185d1e23cf917c1)
#else
#define _m00
#define _m01
#endif