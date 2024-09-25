#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_READ_AHEAD_PARAMETERS.NodeByteSize", node_byte_size, 0x0, 0x10, true, 0x5fdf420421d5f441)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_AHEAD_PARAMETERS.Granularity", granularity, 0x20, 0x20, true, 0x5c0da8225fc218d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_AHEAD_PARAMETERS.PipelinedRequestSize", pipelined_request_size, 0x40, 0x20, true, 0xeb8df745834c2b36)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_AHEAD_PARAMETERS.ReadAheadGrowthPercentage", read_ahead_growth_percentage, 0x60, 0x20, true, 0x53a5f0ed036e143f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif