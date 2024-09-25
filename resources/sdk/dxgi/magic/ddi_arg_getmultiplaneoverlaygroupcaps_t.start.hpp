#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS.hDevice", h_device, 0x0, 0x40, true, 0x2178668d5630e546)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xbb89ba1c5ab9d717)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS.GroupIndex", group_index, 0x60, 0x20, true, 0xa45365d311060593)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_multiplane_overlay_group_caps_t), "_DXGI_DDI_ARG_GETMULTIPLANEOVERLAYGROUPCAPS.MultiplaneOverlayGroupCaps", multiplane_overlay_group_caps, 0x80, 0xa0, true, 0x2ecf6ac56e6cd745)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif