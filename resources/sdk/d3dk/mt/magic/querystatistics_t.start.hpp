#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::querystatistics_type_t), "_D3DKMT_QUERYSTATISTICS.Type", type, 0x0, 0x20, true, 0x42e9ad0679923b1a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_QUERYSTATISTICS.AdapterLuid", adapter_luid, 0x20, 0x40, true, 0xdc52e5fcb289e086)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYSTATISTICS.ProcessHandle", process_handle, 0x80, 0x40, true, 0x498d5d758e23ee67)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::querystatistics_result_t), "_D3DKMT_QUERYSTATISTICS.QueryResult", query_result, 0xc0, 0x0, true, 0x6e5b18a1d1a8569a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::querystatistics_query_segment_t), "_D3DKMT_QUERYSTATISTICS.QuerySegment", query_segment, 0x1900, 0x0, true, 0xcce853cbe43d9147)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::querystatistics_query_segment_t), "_D3DKMT_QUERYSTATISTICS.QueryProcessSegment", query_process_segment, 0x1900, 0x0, true, 0x8e408ec7e5e50421)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::querystatistics_query_node_t), "_D3DKMT_QUERYSTATISTICS.QueryNode", query_node, 0x1900, 0x0, true, 0x12a48f322e8c0ebb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::querystatistics_query_node_t), "_D3DKMT_QUERYSTATISTICS.QueryProcessNode", query_process_node, 0x1900, 0x0, true, 0x4089104842544b22)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::querystatistics_query_vidpnsource_t), "_D3DKMT_QUERYSTATISTICS.QueryVidPnSource", query_vid_pn_source, 0x1900, 0x0, true, 0xe20886a861e91db4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::querystatistics_query_vidpnsource_t), "_D3DKMT_QUERYSTATISTICS.QueryProcessVidPnSource", query_process_vid_pn_source, 0x1900, 0x0, true, 0x8d3c5709d33e554c)
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
#endif