#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.hSrcAllocation", h_src_allocation, 0x0, 0x20, true, 0xdc03826d93399e98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.hDstAllocation", h_dst_allocation, 0x20, 0x20, true, 0x9ced8a9dfb977ed4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.pDXGIContext", p_dxgi_context, 0x40, 0x40, true, 0x3b0c875fd3d9348b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.hHwQueue", h_hw_queue, 0x80, 0x40, true, 0x6844e52dd52c019f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.HwQueueProgressFenceId", hw_queue_progress_fence_id, 0xc0, 0x40, true, 0x227929bdaa521f1b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.PrivateDriverDataSize", private_driver_data_size, 0x100, 0x20, true, 0xcc6c747226ef98a7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_SUBMITPRESENTBLTTOHWQUEUE.pPrivateDriverData", p_private_driver_data, 0x140, 0x40, true, 0xfe9c2aa2e27bce96)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif