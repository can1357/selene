#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE.hHwQueue", h_hw_queue, 0x0, 0x20, true, 0x1b16382594eae48)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE.HwQueueProgressFenceId", hw_queue_progress_fence_id, 0x40, 0x40, true, 0xf44cccca9cbe4757)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_t), "_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE.PrivatePresentData", private_present_data, 0x80, 0xc0, true, 0xc22036bbe9700358)
#else
#define _m00
#define _m01
#define _m02
#endif