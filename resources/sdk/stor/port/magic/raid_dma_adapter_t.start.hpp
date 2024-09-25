#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_t*), "_RAID_DMA_ADAPTER.DmaAdapter", dma_adapter, 0x0, 0x40, true, 0x74b0bc625e941138)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DMA_ADAPTER.NumberOfMapRegisters", number_of_map_registers, 0x60, 0x20, true, 0xa158d9af4ba45b5d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_DMA_ADAPTER.MapRegisterBase", map_register_base, 0x80, 0x40, true, 0xcfe4075fd1f0071c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_dma_width_t), "_RAID_DMA_ADAPTER.Width", width, 0xc0, 0x20, true, 0x6a8e5d81c3526e9e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_DMA_ADAPTER.DmarCompatible", dmar_compatible, 0x40, 0x8, true, 0x28c83334d20eb2a3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_dma_version_t), "_RAID_DMA_ADAPTER.DmaVersion", dma_version, 0xe0, 0x20, true, 0x3ae0d1b40c39f0aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif