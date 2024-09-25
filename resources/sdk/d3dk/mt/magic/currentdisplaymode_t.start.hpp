#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CURRENTDISPLAYMODE.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xc54d82ed8911183a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::displaymode_t), "_D3DKMT_CURRENTDISPLAYMODE.DisplayMode", display_mode, 0x20, 0x60, true, 0x2721202dd5e89a09)
#else
#define _m00
#define _m01
#endif