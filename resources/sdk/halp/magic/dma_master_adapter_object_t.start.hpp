#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_adapter_object_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.AdapterObject", adapter_object, 0x0, 0xc0, true, 0x85e9495519b3191e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.ContiguousAdapterQueue", contiguous_adapter_queue, 0x4c0, 0x80, true, 0x827074aeea667eb2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.ScatterAdapterQueue", scatter_adapter_queue, 0x540, 0x80, true, 0x923d06ef61338511)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.MapBufferSize", map_buffer_size, 0x5c0, 0x20, true, 0x5ea683577b107309)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.MapBufferPhysicalAddress", map_buffer_physical_address, 0x600, 0x40, true, 0xbf4b8fd30e2ff2fd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.ContiguousPageCount", contiguous_page_count, 0x640, 0x20, true, 0xcbcb7b35bcdf5416)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.ContiguousPageLimit", contiguous_page_limit, 0x660, 0x20, true, 0xa31c6efc9e18c12f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.ScatterPageCount", scatter_page_count, 0x680, 0x20, true, 0xea4551d950c12c06)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_MASTER_ADAPTER_OBJECT.ScatterPageLimit", scatter_page_limit, 0x6a0, 0x20, true, 0xd7e105b03c0b0621)
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
#endif