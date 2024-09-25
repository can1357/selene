#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_REDIRECT_STATE.MdsNodeId", mds_node_id, 0x0, 0x20, true, 0x71012da3ab1e0a4a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_QUERY_REDIRECT_STATE.DsNodeId", ds_node_id, 0x20, 0x20, true, 0xd8d34b181986f163)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CSV_QUERY_REDIRECT_STATE.FileRedirected", file_redirected, 0x40, 0x8, true, 0x49357763ebdd06c5)
#else
#define _m00
#define _m01
#define _m02
#endif