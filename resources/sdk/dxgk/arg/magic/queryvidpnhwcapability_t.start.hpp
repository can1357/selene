#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_QUERYVIDPNHWCAPABILITY.hFunctionalVidPn", h_functional_vid_pn, 0x0, 0x40, true, 0x2453707bee99c28)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYVIDPNHWCAPABILITY.SourceId", source_id, 0x40, 0x20, true, 0x14cee28975a9de27)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYVIDPNHWCAPABILITY.TargetId", target_id, 0x60, 0x20, true, 0xc611a22009676d44)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_hw_capability_t), "_DXGKARG_QUERYVIDPNHWCAPABILITY.VidPnHWCaps", vid_pn_hw_caps, 0x80, 0x20, true, 0x8d10cb2f59867eee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif