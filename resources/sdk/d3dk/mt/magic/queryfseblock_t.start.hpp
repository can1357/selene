#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_QUERYFSEBLOCK.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x55407205a842093c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYFSEBLOCK.hAdapter", h_adapter, 0x40, 0x20, true, 0x6a6e18565f27ab13)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYFSEBLOCK.VidPnSourceId", vid_pn_source_id, 0x60, 0x20, true, 0x918a46df26ae2c1e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::queryfseflags_t), "_D3DKMT_QUERYFSEBLOCK.Flags", flags, 0x80, 0x20, true, 0x4dcc0bc85cf33ffb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif