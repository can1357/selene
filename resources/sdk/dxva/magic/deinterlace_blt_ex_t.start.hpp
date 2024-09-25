#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx.Size", size, 0x0, 0x20, true, 0x9e1eda4d618e5b80)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::ayu_vsample2_t), "_DXVA_DeinterlaceBltEx.BackgroundColor", background_color, 0x20, 0x20, true, 0xd1fb8defcb548d37)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_DeinterlaceBltEx.rcTarget", rc_target, 0x40, 0x80, true, 0xd6d87e3339144fc8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXVA_DeinterlaceBltEx.rtTarget", rt_target, 0xc0, 0x40, true, 0x757c1a96f27e493)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx.NumSourceSurfaces", num_source_surfaces, 0x100, 0x20, true, 0x852c818a0ebf068a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_DeinterlaceBltEx.Alpha", alpha, 0x120, 0x20, true, 0x1e4ae0a8f93c1dae)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::video_sample2_t, 32>), "_DXVA_DeinterlaceBltEx.Source", source, 0x140, 0x0, true, 0x244ce953113e6f61)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx.DestinationFormat", destination_format, 0x8940, 0x20, true, 0xa1f9c926060f8ba5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceBltEx.DestinationFlags", destination_flags, 0x8960, 0x20, true, 0xa503dce001489f68)
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