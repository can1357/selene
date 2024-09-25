#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETSHAREDRESOURCEADAPTERLUID.hGlobalShare", h_global_share, 0x0, 0x20, true, 0xf6cd230438863a36)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_GETSHAREDRESOURCEADAPTERLUID.hNtHandle", h_nt_handle, 0x40, 0x40, true, 0x453a1972981a2b82)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_GETSHAREDRESOURCEADAPTERLUID.AdapterLuid", adapter_luid, 0x80, 0x40, true, 0x7c17ba6e9a8e8464)
#else
#define _m00
#define _m01
#define _m02
#endif