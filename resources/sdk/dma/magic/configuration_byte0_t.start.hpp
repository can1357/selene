#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DMA_CONFIGURATION_BYTE0.Channel", channel, 0x0, 0x3, true, 0xe6107fa5285b791c, 3, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMA_CONFIGURATION_BYTE0.Shared", shared, 0x6, 0x1, true, 0x7aa7d58199535abe, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DMA_CONFIGURATION_BYTE0.MoreEntries", more_entries, 0x7, 0x1, true, 0xa02d8dbae454c6b5, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif