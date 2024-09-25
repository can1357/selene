#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENT.hContext", h_context, 0x0, 0x20, true, 0x5252788aa2a5bd96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENT.hSource", h_source, 0x20, 0x20, true, 0x54231fa6f5b4bb43)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENT.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xa512e0bb33323370)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENT.BroadcastContextCount", broadcast_context_count, 0x60, 0x20, true, 0xf052eaa8c5406e5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_D3DKMT_OUTPUTDUPLPRESENT.BroadcastContext", broadcast_context, 0x80, 0x0, true, 0x64473223562beb4e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_rgns_t), "_D3DKMT_OUTPUTDUPLPRESENT.PresentRegions", present_regions, 0x880, 0x0, true, 0x2c618d89a7f40cc3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::outputduplpresentflags_t), "_D3DKMT_OUTPUTDUPLPRESENT.Flags", flags, 0x980, 0x20, true, 0x2f636cacf494ae24)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPLPRESENT.hIndirectContext", h_indirect_context, 0x9a0, 0x20, true, 0x4c138f2b74823076)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif