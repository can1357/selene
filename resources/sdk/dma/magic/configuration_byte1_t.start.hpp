#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DMA_CONFIGURATION_BYTE1.TransferSize", transfer_size, 0x2, 0x2, true, 0x9da90fb4a1601058, 2, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DMA_CONFIGURATION_BYTE1.Timing", timing, 0x4, 0x2, true, 0xd240c7f7a9ee3645, 2, uint8_t)
#else
#define _m00
#define _m01
#endif