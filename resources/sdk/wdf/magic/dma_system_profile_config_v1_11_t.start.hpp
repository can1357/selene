#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xd75b1c6107bf8f6b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_11.DemandMode", demand_mode, 0x0, 0x0, false, 0x46b1d65e2125587d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_11.LoopedTransfer", looped_transfer, 0x0, 0x0, false, 0xbf3228ebe9596ad6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_11.DmaWidth", dma_width, 0x0, 0x0, false, 0xc60cb4850149e8d8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_11.DeviceAddress", device_address, 0x0, 0x0, false, 0x15202b0c9e3952bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_11.DmaDescriptor", dma_descriptor, 0x0, 0x0, false, 0xdf6df606d83b58d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif