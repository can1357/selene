#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_DXVA_PicEntry_H264.Index7Bits", index7_bits, 0x0, 0x7, true, 0xb249655702db6bce, 7, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicEntry_H264.AssociatedFlag", associated_flag, 0x7, 0x1, true, 0xe70696f6d800e0a6, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicEntry_H264.bPicEntry", b_pic_entry, 0x0, 0x8, true, 0xb5d2e4062c830464)
#else
#define _m00
#define _m01
#define _m02
#endif