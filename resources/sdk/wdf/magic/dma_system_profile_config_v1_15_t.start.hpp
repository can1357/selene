#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x5ae1efdad2c6c212)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_15.DemandMode", demand_mode, 0x0, 0x0, false, 0x2e3d6dadff35fd5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_15.LoopedTransfer", looped_transfer, 0x0, 0x0, false, 0x62fd3d5123dd24f1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_15.DmaWidth", dma_width, 0x0, 0x0, false, 0x42f6cc8d99a25dbc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_15.DeviceAddress", device_address, 0x0, 0x0, false, 0x2423dd9527271f9b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_15.DmaDescriptor", dma_descriptor, 0x0, 0x0, false, 0xac09ffea2390ac8d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif