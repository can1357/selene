#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V1.MapRegisterCount", map_register_count, 0x0, 0x20, true, 0x980a3465cef17a02)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V1.ScatterGatherElementCount", scatter_gather_element_count, 0x20, 0x20, true, 0x5b9841347366b313)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_TRANSFER_INFO_V1.ScatterGatherListSize", scatter_gather_list_size, 0x40, 0x20, true, 0xc49861752b792c41)
#else
#define _m00
#define _m01
#define _m02
#endif