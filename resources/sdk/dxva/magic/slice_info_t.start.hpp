#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_SliceInfo.wHorizontalPosition", w_horizontal_position, 0x0, 0x10, true, 0xee7788f7b743d5e0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_SliceInfo.wVerticalPosition", w_vertical_position, 0x10, 0x10, true, 0x6326034962934cb1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_SliceInfo.dwSliceBitsInBuffer", dw_slice_bits_in_buffer, 0x20, 0x20, true, 0x3dfa8968de1b7d4e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_SliceInfo.dwSliceDataLocation", dw_slice_data_location, 0x40, 0x20, true, 0x1c246be39654fda4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_SliceInfo.bStartCodeBitOffset", b_start_code_bit_offset, 0x60, 0x8, true, 0xf186ba962ee09a2d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_SliceInfo.bReservedBits", b_reserved_bits, 0x68, 0x8, true, 0xf58c30925d9a5b6c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_SliceInfo.wMBbitOffset", w_m_bbit_offset, 0x70, 0x10, true, 0xb5e316c9ad79d5b6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_SliceInfo.wNumberMBsInSlice", w_number_m_bs_in_slice, 0x80, 0x10, true, 0xfae4c42aaac4226)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_SliceInfo.wQuantizerScaleCode", w_quantizer_scale_code, 0x90, 0x10, true, 0x55fa5b7e660960e2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_SliceInfo.wBadSliceChopping", w_bad_slice_chopping, 0xa0, 0x10, true, 0xc53c03518f82f130)
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
#define _m09
#endif