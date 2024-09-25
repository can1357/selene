#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dma::configuration_byte0_t), "_EISA_DMA_CONFIGURATION.ConfigurationByte0", configuration_byte0, 0x0, 0x8, true, 0x9183960a0c083b05)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dma::configuration_byte1_t), "_EISA_DMA_CONFIGURATION.ConfigurationByte1", configuration_byte1, 0x8, 0x8, true, 0x6d97da6c45b993b4)
#else
#define _m00
#define _m01
#endif