#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VCN_RANGE_INPUT_BUFFER.StartingVcn", starting_vcn, 0x0, 0x40, true, 0x1f0393349657f90e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VCN_RANGE_INPUT_BUFFER.ClusterCount", cluster_count, 0x40, 0x40, true, 0x480bc60f5a334198)
#else
#define _m00
#define _m01
#endif