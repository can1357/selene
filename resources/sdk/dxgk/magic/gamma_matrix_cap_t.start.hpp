#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_DXGK_GAMMA_MATRIX_CAP.MatrixSizeX", matrix_size_x, 0x0, 0xa, true, 0xf06e958e99e76cea, 10, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_DXGK_GAMMA_MATRIX_CAP.MatrixSizeY", matrix_size_y, 0xa, 0xa, true, 0x20fb7d7ea0299623, 10, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GAMMA_MATRIX_CAP.Value", value, 0x0, 0x20, true, 0xcee595a7221a1b6a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dkgk_gamma_data_cap_t), "_DXGK_GAMMA_MATRIX_CAP.GammaDataCap", gamma_data_cap, 0x20, 0x80, true, 0xa8a5e802131f6bd1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif