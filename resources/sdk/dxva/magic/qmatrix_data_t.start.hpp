#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DXVA_QmatrixData.bNewQmatrix", b_new_qmatrix, 0x0, 0x20, true, 0x992782c2c48850bc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint16_t, 64>, 4>), "_DXVA_QmatrixData.Qmatrix", qmatrix, 0x20, 0x0, true, 0xa6ede45ceb3486d3)
#else
#define _m00
#define _m01
#endif