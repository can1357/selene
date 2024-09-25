#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_RECOMMENDVIDPNTOPOLOGY.hVidPn", h_vid_pn, 0x0, 0x40, true, 0x31614eb98d3ccc6f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RECOMMENDVIDPNTOPOLOGY.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xf243e06014955a45)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::recommendvidpntopology_reason_t), "_DXGKARG_RECOMMENDVIDPNTOPOLOGY.RequestReason", request_reason, 0x60, 0x20, true, 0x1eb3112bb15cab99)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpntopology_t*), "_DXGKARG_RECOMMENDVIDPNTOPOLOGY.hFallbackTopology", h_fallback_topology, 0x80, 0x40, true, 0x7534a533682db337)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif