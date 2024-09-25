#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.hDevice", h_device, 0x0, 0x40, true, 0x24c852da46208652)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.pDXGIContext", p_dxgi_context, 0x40, 0x40, true, 0x376a54eb5684d52)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x80dde6731c76bb11)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_flags_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.Flags", flags, 0xa0, 0x20, true, 0xd88a13e28dfdff59)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.FlipInterval", flip_interval, 0xc0, 0x20, true, 0x7e4f80ba8cec871e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.PresentPlaneCount", present_plane_count, 0xe0, 0x20, true, 0x5fa56475940eeac2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_multiplane_overlay_t*), "_DXGI_DDI_ARG_PRESENTMULTIPLANEOVERLAY.pPresentPlanes", p_present_planes, 0x100, 0x40, true, 0x19d73459be720f8c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif