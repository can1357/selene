#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMSUPPORT_AGGREGATION.PageFaultCount", page_fault_count, 0x0, 0x20, true, 0x6fbd42ad9fdd75b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_AGGREGATION.WorkingSetSize", working_set_size, 0x40, 0x40, true, 0x37be35028cf402c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_AGGREGATION.WorkingSetLeafSize", working_set_leaf_size, 0x80, 0x40, true, 0x5661db494c5ad1bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_AGGREGATION.PeakWorkingSetSize", peak_working_set_size, 0xc0, 0x40, true, 0x97ac26f3b465adf0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif