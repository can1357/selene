#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_H264_Short.BSNALunitDataLocation", bsna_lunit_data_location, 0x0, 0x20, true, 0x3bad615a8e74cde7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_H264_Short.SliceBytesInBuffer", slice_bytes_in_buffer, 0x20, 0x20, true, 0xafe1258c3b7b9c11)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_H264_Short.wBadSliceChopping", w_bad_slice_chopping, 0x40, 0x10, true, 0xe78206a2bd239b97)
#else
#define _m00
#define _m01
#define _m02
#endif