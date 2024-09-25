#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_SCATTER_GATHER_LIST.NumberOfElements", number_of_elements, 0x0, 0x20, true, 0x5f7a76dfe31f1728)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::scatter_gather_element_t>), "_DMA_SCATTER_GATHER_LIST.Elements", elements, 0x80, 0x0, true, 0x8274fd8806860e8b)
#else
#define _m00
#define _m01
#endif