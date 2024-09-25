#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PresentDmaBuffer.Size", size, 0x0, 0x20, true, 0xf51b6ac3bc95ae50)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PresentDmaBuffer.PrivateDriverDataSize", private_driver_data_size, 0x20, 0x20, true, 0xd709099fe6d85781)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PresentDmaBuffer.SegmentId", segment_id, 0x40, 0x20, true, 0x6f62f51224130289)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_present_dma_buffer_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PresentDmaBuffer", present_dma_buffer, 0x0, 0x80, true, 0x59c55c6910bf58c0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PagingDmaBuffer.Size", size, 0x0, 0x20, true, 0x9d884cb2e5564d38)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PagingDmaBuffer.PrivateDriverDataSize", private_driver_data_size, 0x20, 0x20, true, 0x260763fc2e104ac4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PagingDmaBuffer.SegmentId", segment_id, 0x40, 0x20, true, 0xd57792adbf92fab0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_present_dma_buffer_t), "_DXGK_DMABUFFERCAPS_DEPRECATED.PagingDmaBuffer", paging_dma_buffer, 0x280, 0x80, true, 0x5ce6be2075b295ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif