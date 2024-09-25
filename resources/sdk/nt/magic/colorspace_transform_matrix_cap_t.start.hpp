#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_COLORSPACE_TRANSFORM_MATRIX_CAP.MatrixSizeX", matrix_size_x, 0x0, 0xa, true, 0x734a4f910b6cf295, 10, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_COLORSPACE_TRANSFORM_MATRIX_CAP.MatrixSizeY", matrix_size_y, 0xa, 0xa, true, 0xd4fa8e8112937e00, 10, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COLORSPACE_TRANSFORM_MATRIX_CAP.Value", value, 0x0, 0x20, true, 0x8f03805e6d53c113)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_data_cap_t), "_COLORSPACE_TRANSFORM_MATRIX_CAP.DataCap", data_cap, 0x20, 0x80, true, 0x9b0dbf3b17d5d86b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif