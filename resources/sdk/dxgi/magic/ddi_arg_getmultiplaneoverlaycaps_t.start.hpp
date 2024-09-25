#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS.hDevice", h_device, 0x0, 0x40, true, 0xb99cf11b3a89b406)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x32980098a30c0c4a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_multiplane_overlay_caps_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYCAPS.MultiplaneOverlayCaps", multiplane_overlay_caps, 0x60, 0x40, true, 0x40552c7e633ed4ad)
#else
#define _m00
#define _m01
#define _m02
#endif