#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CSV_QUERY_MDS_PATH_V2.Version", version, 0x0, 0x40, true, 0x9d0af04554c667c6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.RequiredSize", required_size, 0x40, 0x20, true, 0x2887bd6c1423a646)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.MdsNodeId", mds_node_id, 0x60, 0x20, true, 0xd76479a8efe7ce80)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.DsNodeId", ds_node_id, 0x80, 0x20, true, 0x1b62165f82fd561e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.Flags", flags, 0xa0, 0x20, true, 0x2572a58618762018)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::csvfs_disk_connectivity_t), "_CSV_QUERY_MDS_PATH_V2.DiskConnectivity", disk_connectivity, 0xc0, 0x20, true, 0xa76e21f9e3e5b6c1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CSV_QUERY_MDS_PATH_V2.VolumeId", volume_id, 0xe0, 0x80, true, 0x2c5380c78350a9e3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.IpAddressOffset", ip_address_offset, 0x160, 0x20, true, 0x32a547ed2e570c2a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.IpAddressLength", ip_address_length, 0x180, 0x20, true, 0x68b50f5129700815)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.PathOffset", path_offset, 0x1a0, 0x20, true, 0x6eb8ba87073ce839)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH_V2.PathLength", path_length, 0x1c0, 0x20, true, 0x842ab998bea4684b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif