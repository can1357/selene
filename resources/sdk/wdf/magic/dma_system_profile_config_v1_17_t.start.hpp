#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x9c2df7a3ddf729c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.DemandMode", demand_mode, 0x0, 0x0, false, 0xa81b9ac133fff7b2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.LoopedTransfer", looped_transfer, 0x0, 0x0, false, 0x8b343c8bbc448828)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.DmaWidth", dma_width, 0x0, 0x0, false, 0xf26d8ec846cf1857)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.DeviceAddress", device_address, 0x0, 0x0, false, 0xc8dc60403f8337ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_17.DmaDescriptor", dma_descriptor, 0x0, 0x0, false, 0x21ac2231b58d40be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif