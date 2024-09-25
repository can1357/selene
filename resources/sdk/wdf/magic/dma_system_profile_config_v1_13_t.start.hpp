#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x7861e49ab4bcaccd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_13.DemandMode", demand_mode, 0x0, 0x0, false, 0xf7b45dc70829e40b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_13.LoopedTransfer", looped_transfer, 0x0, 0x0, false, 0x645331741557c0b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_13.DmaWidth", dma_width, 0x0, 0x0, false, 0xb89e9ecfb3476be1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_13.DeviceAddress", device_address, 0x0, 0x0, false, 0xe8532747e61bcc83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_DMA_SYSTEM_PROFILE_CONFIG_V1_13.DmaDescriptor", dma_descriptor, 0x0, 0x0, false, 0xcce12149f70cf388)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif