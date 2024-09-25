#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER.OptimalWriteSize", optimal_write_size, 0x0, 0x20, true, 0x490eb18c8db79c90)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER.StreamGranularitySize", stream_granularity_size, 0x20, 0x20, true, 0x7d278b05b40c2e28)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER.StreamIdMin", stream_id_min, 0x40, 0x20, true, 0xee0b3f026b74f7ec)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER.StreamIdMax", stream_id_max, 0x60, 0x20, true, 0x34cbd4909c6e3829)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif