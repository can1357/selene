#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_INPUT.Flags", flags, 0x0, 0x20, true, 0x28aa69af4db16b0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOOKUP_STREAM_FROM_CLUSTER_INPUT.NumberOfClusters", number_of_clusters, 0x20, 0x20, true, 0xe665302cf196a1fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_LOOKUP_STREAM_FROM_CLUSTER_INPUT.Cluster", cluster, 0x40, 0x40, true, 0x563e3d8361c7b15a)
#else
#define _m00
#define _m01
#define _m02
#endif