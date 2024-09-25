#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.hDevice", h_device, 0x0, 0x40, true, 0x2c4f5f5968697786)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.pDXGIContext", p_dxgi_context, 0x40, 0x40, true, 0x9b13538f62df104)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x14c543fae6fe3b87)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_flags_t), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.Flags", flags, 0xa0, 0x20, true, 0xe4ff22f7acc2f49d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.FlipInterval", flip_interval, 0xc0, 0x20, true, 0x9e419dabf09d9e02)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.PresentPlaneCount", present_plane_count, 0xe0, 0x20, true, 0x9b9d6216a0351920)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_multiplane_overlay1_t*), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.pPresentPlanes", p_present_planes, 0x100, 0x40, true, 0xfb55f0233b6b0b84)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t*), "DXGI1_6_1_DDI_ARG_PRESENTMULTIPLANEOVERLAY.pRotationHints", p_rotation_hints, 0x140, 0x40, true, 0x56f9ba3bf61258de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif