#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_HEVC_Short.BSNALunitDataLocation", bsna_lunit_data_location, 0x0, 0x20, true, 0x3f554d56bc62b9bf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_HEVC_Short.SliceBytesInBuffer", slice_bytes_in_buffer, 0x20, 0x20, true, 0xa805407fab2705c1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_HEVC_Short.wBadSliceChopping", w_bad_slice_chopping, 0x40, 0x10, true, 0x98e1f157c04681a8)
#else
#define _m00
#define _m01
#define _m02
#endif