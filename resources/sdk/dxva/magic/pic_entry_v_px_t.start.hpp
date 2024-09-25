#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXVA_PicEntry_VPx.Index7Bits", index7_bits, 0x0, 0x7, true, 0x4495538bb5ead4e8, 7, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicEntry_VPx.AssociatedFlag", associated_flag, 0x7, 0x1, true, 0x271a7c9bcd892aa3, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicEntry_VPx.bPicEntry", b_pic_entry, 0x0, 0x8, true, 0x3174faf0d8d6c695)
#else
#define _m00
#define _m01
#define _m02
#endif