#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_ADAPTER_INFO_V1.ReadDmaCounterAvailable", read_dma_counter_available, 0x0, 0x20, true, 0x4ae926091a562b0a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_ADAPTER_INFO_V1.ScatterGatherLimit", scatter_gather_limit, 0x20, 0x20, true, 0x32d7d47fad24f567)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_ADAPTER_INFO_V1.DmaAddressWidth", dma_address_width, 0x40, 0x20, true, 0x9d25235770732c68)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_ADAPTER_INFO_V1.Flags", flags, 0x60, 0x20, true, 0xf5822d5af9453ad3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_ADAPTER_INFO_V1.MinimumTransferUnit", minimum_transfer_unit, 0x80, 0x20, true, 0xf07241785f0dfe52)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif