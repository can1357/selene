#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DEVICEINFOFLAGS.GuaranteedDmaBufferContract", guaranteed_dma_buffer_contract, 0x0, 0x1, true, 0xf831a5dbdd6d28eb, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICEINFOFLAGS.Value", value, 0x0, 0x20, true, 0x2d5da5933d08cf3f)
#else
#define _m00
#define _m01
#endif