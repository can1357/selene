#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH.MdsNodeId", mds_node_id, 0x0, 0x20, true, 0x7a7b11929836da2f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH.DsNodeId", ds_node_id, 0x20, 0x20, true, 0xa79ed79e03166a71)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_MDS_PATH.PathLength", path_length, 0x40, 0x20, true, 0x84bc2aa5fc38f034)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CSV_QUERY_MDS_PATH.Path", path, 0x60, 0x10, true, 0x3d2bfc96e0a6a58d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif