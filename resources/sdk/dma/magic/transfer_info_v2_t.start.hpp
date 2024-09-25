#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V2.MapRegisterCount", map_register_count, 0x0, 0x20, true, 0xb9c8ff2eaaa6bc23)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V2.ScatterGatherElementCount", scatter_gather_element_count, 0x20, 0x20, true, 0xa0b43117548bc6e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V2.ScatterGatherListSize", scatter_gather_list_size, 0x40, 0x20, true, 0xee71da3d31cf2ebb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V2.LogicalPageCount", logical_page_count, 0x60, 0x20, true, 0x9bfecb8932716aac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif