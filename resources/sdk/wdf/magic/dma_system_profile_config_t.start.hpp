#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG.Size", size, 0x0, 0x20, true, 0xb227cb3a0390fab0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG.DemandMode", demand_mode, 0x20, 0x8, true, 0xa77459ed5910c74c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG.LoopedTransfer", looped_transfer, 0x28, 0x8, true, 0xcf0e25322c9b06c3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG.DmaWidth", dma_width, 0x40, 0x20, true, 0x954e904115743bc5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_DMA_SYSTEM_PROFILE_CONFIG.DeviceAddress", device_address, 0x80, 0x40, true, 0xc923f9054accba3a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_DMA_SYSTEM_PROFILE_CONFIG.DmaDescriptor", dma_descriptor, 0xc0, 0x40, true, 0x65c11f57cabbb44f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif