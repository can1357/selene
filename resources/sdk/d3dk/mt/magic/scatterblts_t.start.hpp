#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SCATTERBLTS.NumBlts", num_blts, 0x0, 0x20, true, 0xbf925425a9eddeab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mt::scatterblt_t, 12>), "_D3DKMT_SCATTERBLTS.Blts", blts, 0x40, 0x0, true, 0x5341006621710e97)
#else
#define _m00
#define _m01
#endif