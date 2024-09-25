#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::deviceescape_type_t), "_D3DKMT_DEVICE_ESCAPE.Type", type, 0x0, 0x20, true, 0x76627f1168ea166a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_ESCAPE.VidPnFromAllocation.hPrimaryAllocation", h_primary_allocation, 0x0, 0x20, true, 0x6212dcd43100c49b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_ESCAPE.VidPnFromAllocation.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xc6e427975ff35772)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_vid_pn_from_allocation_t), "_D3DKMT_DEVICE_ESCAPE.VidPnFromAllocation", vid_pn_from_allocation, 0x20, 0x40, true, 0xd910d3241d51b0d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif