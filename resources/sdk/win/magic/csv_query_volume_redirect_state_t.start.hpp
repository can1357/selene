#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_VOLUME_REDIRECT_STATE.MdsNodeId", mds_node_id, 0x0, 0x20, true, 0x7b48d68bc98c307d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_VOLUME_REDIRECT_STATE.DsNodeId", ds_node_id, 0x20, 0x20, true, 0x71c0fc0fb51d9506)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CSV_QUERY_VOLUME_REDIRECT_STATE.IsDiskConnected", is_disk_connected, 0x40, 0x8, true, 0x7c608cb727743fe9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CSV_QUERY_VOLUME_REDIRECT_STATE.ClusterEnableDirectIo", cluster_enable_direct_io, 0x48, 0x8, true, 0x3a3467a6a64a2a53)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::csvfs_disk_connectivity_t), "_CSV_QUERY_VOLUME_REDIRECT_STATE.DiskConnectivity", disk_connectivity, 0x60, 0x20, true, 0x8a9b9519c91a67e2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif