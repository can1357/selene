#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER.ExtentCount", extent_count, 0x0, 0x0, false, 0xb203fd7caa2bb65d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::refs_stream_extent_t, 1>), "_REFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER.Extents", extents, 0x0, 0x0, false, 0x66ef1d531c3911d)
#else
#define _m00
#define _m01
#endif