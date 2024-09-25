#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_DMA_PROTECTION_INFORMATION.DmaProtectionsAvailable", dma_protections_available, 0x0, 0x0, false, 0x5a021aaf0ea44aac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_DMA_PROTECTION_INFORMATION.DmaProtectionsInUse", dma_protections_in_use, 0x0, 0x0, false, 0xb33d30bdc7eeb1de)
#else
#define _m00
#define _m01
#endif