#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXVA_PicEntry_HEVC.Index7Bits", index7_bits, 0x0, 0x7, true, 0x17cf2431ed647766, 7, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicEntry_HEVC.AssociatedFlag", associated_flag, 0x7, 0x1, true, 0xc0dddb0b81cf8814, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicEntry_HEVC.bPicEntry", b_pic_entry, 0x0, 0x8, true, 0xd0d0d76e96380c45)
#else
#define _m00
#define _m01
#define _m02
#endif