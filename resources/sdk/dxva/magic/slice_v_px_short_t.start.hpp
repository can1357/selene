#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_VPx_Short.BSNALunitDataLocation", bsna_lunit_data_location, 0x0, 0x20, true, 0x5f7402d83e7b04f3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Slice_VPx_Short.SliceBytesInBuffer", slice_bytes_in_buffer, 0x20, 0x20, true, 0xb6c3be1e308cfe25)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Slice_VPx_Short.wBadSliceChopping", w_bad_slice_chopping, 0x40, 0x10, true, 0x2ebcb04cdd3e8dfd)
#else
#define _m00
#define _m01
#define _m02
#endif