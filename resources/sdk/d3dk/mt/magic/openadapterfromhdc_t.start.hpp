#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hdc_t*), "_D3DKMT_OPENADAPTERFROMHDC.hDc", h_dc, 0x0, 0x40, true, 0xd56d77a3f5e6a2d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENADAPTERFROMHDC.AdapterHandle", adapter_handle, 0x40, 0x20, true, 0x2dcc8dd18899bac1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_OPENADAPTERFROMHDC.AdapterLuid", adapter_luid, 0x60, 0x40, true, 0xd31030aa0739b50e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENADAPTERFROMHDC.VidPnSourceId", vid_pn_source_id, 0xa0, 0x20, true, 0x17853cf795dc1660)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif