#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VP_DEVICE_DESCRIPTION.ScatterGather", scatter_gather, 0x0, 0x8, true, 0x9f8044dcc89ad8fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VP_DEVICE_DESCRIPTION.Dma32BitAddresses", dma32_bit_addresses, 0x8, 0x8, true, 0x44033bc51d0ec91c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VP_DEVICE_DESCRIPTION.Dma64BitAddresses", dma64_bit_addresses, 0x10, 0x8, true, 0x73797480ecbb0989)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VP_DEVICE_DESCRIPTION.MaximumLength", maximum_length, 0x20, 0x20, true, 0xd2bda31df7e34fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif