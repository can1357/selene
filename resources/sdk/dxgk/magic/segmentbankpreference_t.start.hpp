#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXGK_SEGMENTBANKPREFERENCE.Bank0", bank0, 0x0, 0x7, true, 0xf7cce61a0b17efc9, 7, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTBANKPREFERENCE.Direction0", direction0, 0x7, 0x1, true, 0x2102d2cd87a1820, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXGK_SEGMENTBANKPREFERENCE.Bank1", bank1, 0x8, 0x7, true, 0x38c704ddd64c4d81, 7, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTBANKPREFERENCE.Direction1", direction1, 0xf, 0x1, true, 0xe4fda477881d7e3a, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXGK_SEGMENTBANKPREFERENCE.Bank2", bank2, 0x10, 0x7, true, 0xe981d2b376238704, 7, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTBANKPREFERENCE.Direction2", direction2, 0x17, 0x1, true, 0xf6c5ed11d19480b7, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXGK_SEGMENTBANKPREFERENCE.Bank3", bank3, 0x18, 0x7, true, 0x6b5fb5ab3a577e47, 7, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTBANKPREFERENCE.Direction3", direction3, 0x1f, 0x1, true, 0xa410f6dad33433d2, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTBANKPREFERENCE.Value", value, 0x0, 0x20, true, 0xe4162569ca3f9a55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif