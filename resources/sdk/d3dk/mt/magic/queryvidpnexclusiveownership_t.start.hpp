#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP.hProcess", h_process, 0x0, 0x40, true, 0xe72dcdf132f6118b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP.hWindow", h_window, 0x40, 0x40, true, 0x16951a805d2d369)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x95dd9c675f19b94d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP.AdapterLuid", adapter_luid, 0xa0, 0x40, true, 0xb1e5cd260a09ff1a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::vidpnsourceowner_type_t), "_D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP.OwnerType", owner_type, 0xe0, 0x20, true, 0xd86531e8efb66570)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif