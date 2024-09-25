#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DISPLAYMODELIST.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x6963e039870d5e07)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DISPLAYMODELIST.ModeCount", mode_count, 0x20, 0x20, true, 0xec2ad20008b54c42)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mt::displaymode_t>), "_D3DKMT_DISPLAYMODELIST.pModeList", p_mode_list, 0x40, 0x0, true, 0x1c780acc5608a991)
#else
#define _m00
#define _m01
#define _m02
#endif