#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_COMMITVIDPN.hFunctionalVidPn", h_functional_vid_pn, 0x0, 0x40, true, 0x6fe70e6b5a1a7753)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_COMMITVIDPN.AffectedVidPnSourceId", affected_vid_pn_source_id, 0x40, 0x20, true, 0xb070fa74c0346c8b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_connectivity_checks_t), "_DXGKARG_COMMITVIDPN.MonitorConnectivityChecks", monitor_connectivity_checks, 0x60, 0x20, true, 0x65135c4d76a8a97c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_COMMITVIDPN.hPrimaryAllocation", h_primary_allocation, 0x80, 0x40, true, 0xf2cfff4270dabc0e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::arg::commitvidpn_flags_t), "_DXGKARG_COMMITVIDPN.Flags", flags, 0xc0, 0x20, true, 0x44158b808f0ca03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif