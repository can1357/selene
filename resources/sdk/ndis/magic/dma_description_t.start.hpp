#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_DMA_DESCRIPTION.DemandMode", demand_mode, 0x0, 0x8, true, 0xaa050183b1d708d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_DMA_DESCRIPTION.AutoInitialize", auto_initialize, 0x8, 0x8, true, 0x71140e65b04e9e49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_DMA_DESCRIPTION.DmaChannelSpecified", dma_channel_specified, 0x10, 0x8, true, 0xd0dce7611229218e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_NDIS_DMA_DESCRIPTION.DmaWidth", dma_width, 0x20, 0x20, true, 0xeaf2cd0b538dbf37)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::speed_t), "_NDIS_DMA_DESCRIPTION.DmaSpeed", dma_speed, 0x40, 0x20, true, 0xcabc49f190bacebd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_DMA_DESCRIPTION.DmaPort", dma_port, 0x60, 0x20, true, 0x27280ed00a2baea4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_DMA_DESCRIPTION.DmaChannel", dma_channel, 0x80, 0x20, true, 0x4fb10f79a9b1281b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif