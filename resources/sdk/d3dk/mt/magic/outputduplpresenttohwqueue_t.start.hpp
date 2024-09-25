#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.hSource", h_source, 0x0, 0x20, true, 0x5bb8bc5a411337e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x76c9f36366cdf61e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.BroadcastHwQueueCount", broadcast_hw_queue_count, 0x40, 0x20, true, 0xde97eef43dfa60eb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.hHwQueues", h_hw_queues, 0x80, 0x40, true, 0xe53e417ed9d15801)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_rgns_t), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.PresentRegions", present_regions, 0xc0, 0x0, true, 0xff457c911576a036)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::outputduplpresentflags_t), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.Flags", flags, 0x1c0, 0x20, true, 0xaf0de19f727c9842)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE.hIndirectHwQueue", h_indirect_hw_queue, 0x1e0, 0x20, true, 0x682d0258727a489b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif