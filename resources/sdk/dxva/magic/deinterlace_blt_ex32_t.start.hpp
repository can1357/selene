#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx32.Size", size, 0x0, 0x20, true, 0x24528e8d6e8c1db8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::ayu_vsample2_t), "_DXVA_DeinterlaceBltEx32.BackgroundColor", background_color, 0x20, 0x20, true, 0xa3292b864eb80c99)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_DeinterlaceBltEx32.rcTarget", rc_target, 0x40, 0x80, true, 0x920cdc2a2899c184)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_DeinterlaceBltEx32.rtTarget", rt_target, 0xc0, 0x40, true, 0x7abe1e52d9bd353)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx32.NumSourceSurfaces", num_source_surfaces, 0x100, 0x20, true, 0x42bb240feab99e22)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_DeinterlaceBltEx32.Alpha", alpha, 0x120, 0x20, true, 0x9f68466be72f9692)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::video_sample32_t, 32>), "_DXVA_DeinterlaceBltEx32.Source", source, 0x140, 0x0, true, 0xf85b33803375bd56)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx32.DestinationFormat", destination_format, 0x8140, 0x20, true, 0x4a668d8bba1d65c8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx32.DestinationFlags", destination_flags, 0x8160, 0x20, true, 0x7a31a99829e22936)
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
#endif