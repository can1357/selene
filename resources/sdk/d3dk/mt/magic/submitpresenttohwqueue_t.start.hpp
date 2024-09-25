#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_SUBMITPRESENTTOHWQUEUE.hHwQueues", h_hw_queues, 0x0, 0x40, true, 0x8b95ac1aca0328b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_t), "_D3DKMT_SUBMITPRESENTTOHWQUEUE.PrivatePresentData", private_present_data, 0x40, 0xc0, true, 0xa73f70d25007b5dc)
#else
#define _m00
#define _m01
#endif