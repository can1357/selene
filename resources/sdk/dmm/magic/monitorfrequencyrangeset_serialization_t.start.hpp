#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION.NumFrequencyRanges", num_frequency_ranges, 0x0, 0x8, true, 0x2db9d385b566145)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mdt::monitor_frequency_range_t, 1>), "_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION.FrequencyRangeSerialization", frequency_range_serialization, 0x40, 0x80, true, 0x1996dd4c2b1e6c51)
#else
#define _m00
#define _m01
#endif