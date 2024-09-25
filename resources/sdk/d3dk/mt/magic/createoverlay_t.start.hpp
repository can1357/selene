#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEOVERLAY.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xfec8bbc7977a5a62)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEOVERLAY.hDevice", h_device, 0x20, 0x20, true, 0x64ec51789b85d0c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::kerneloverlayinfo_t), "_D3DKMT_CREATEOVERLAY.OverlayInfo", overlay_info, 0x40, 0xc0, true, 0x35ba71efa54ec400)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEOVERLAY.hOverlay", h_overlay, 0x200, 0x20, true, 0x636514cedf1f4776)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif