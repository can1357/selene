#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x822d170aeab979b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.MaxPlanes", max_planes, 0x20, 0x20, true, 0x6704c3412e6fb430)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.MaxRGBPlanes", max_rgb_planes, 0x40, 0x20, true, 0xa5a1afb56eff9c79)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.MaxYUVPlanes", max_yuv_planes, 0x60, 0x20, true, 0x95b69f7568d746ab)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplaneoverlaycaps_t), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.OverlayCaps", overlay_caps, 0x80, 0x20, true, 0x6a4f48c1c280b223)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.MaxStretchFactor", max_stretch_factor, 0xa0, 0x20, true, 0xf104f205120dc102)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXGKARG_GETMULTIPLANEOVERLAYCAPS.MaxShrinkFactor", max_shrink_factor, 0xc0, 0x20, true, 0xc1fc32f87e661ef6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif