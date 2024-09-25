#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceQueryAvailableModes.Size", size, 0x0, 0x20, true, 0x1d5469bb9100fd26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceQueryAvailableModes.NumGuids", num_guids, 0x20, 0x20, true, 0xdc23841c37d6d8c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 32>), "_DXVA_DeinterlaceQueryAvailableModes.Guids", guids, 0x40, 0x0, true, 0xc2ec87a31fd948f)
#else
#define _m00
#define _m01
#define _m02
#endif