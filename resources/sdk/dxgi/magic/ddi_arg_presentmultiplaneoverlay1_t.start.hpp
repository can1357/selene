#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.hDevice", h_device, 0x0, 0x40, true, 0x5abffa6884baff9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.pDXGIContext", p_dxgi_context, 0x40, 0x40, true, 0x8515e7fd53d8cbe4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x4e58fb8534b44e72)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_flags_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.Flags", flags, 0xa0, 0x20, true, 0xd56c2a1fb0c247f2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.FlipInterval", flip_interval, 0xc0, 0x20, true, 0xec89fc4b2f0cb807)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.PresentPlaneCount", present_plane_count, 0xe0, 0x20, true, 0xca1425590d8d8148)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_multiplane_overlay1_t*), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY1.pPresentPlanes", p_present_planes, 0x100, 0x40, true, 0x8126c7515fc19d2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif