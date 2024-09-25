#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETDISPLAYMODELIST.hAdapter", h_adapter, 0x0, 0x20, true, 0x9dcc8df5faf83c27)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETDISPLAYMODELIST.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xa1a74a79f3d02395)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::displaymode_t*), "_D3DKMT_GETDISPLAYMODELIST.pModeList", p_mode_list, 0x40, 0x40, true, 0x7c6e0c68a69ae044)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETDISPLAYMODELIST.ModeCount", mode_count, 0x80, 0x20, true, 0xaf0f5cdab938d50a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif