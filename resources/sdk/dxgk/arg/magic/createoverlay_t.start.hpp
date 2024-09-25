#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEOVERLAY.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x103105bb8d53cba7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::overlayinfo_t), "_DXGKARG_CREATEOVERLAY.OverlayInfo", overlay_info, 0x40, 0x40, true, 0x1b7dc4a3e903a20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEOVERLAY.hOverlay", h_overlay, 0x280, 0x40, true, 0xe69f201fa971c4a9)
#else
#define _m00
#define _m01
#define _m02
#endif