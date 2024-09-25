#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CLUSTER_RANGE.StartingCluster", starting_cluster, 0x0, 0x40, true, 0xc1e7ad5681298df4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CLUSTER_RANGE.ClusterCount", cluster_count, 0x40, 0x40, true, 0xb84da4b54d7a182c)
#else
#define _m00
#define _m01
#endif