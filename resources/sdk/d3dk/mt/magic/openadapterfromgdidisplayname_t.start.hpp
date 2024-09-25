#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME.DeviceName", device_name, 0x0, 0x0, true, 0x1e5a09d0ecd4503f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME.AdapterHandle", adapter_handle, 0x200, 0x20, true, 0xae8d237b57cfd0c6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME.AdapterLuid", adapter_luid, 0x220, 0x40, true, 0x5907a7ae9d6b6427)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME.VidPnSourceId", vid_pn_source_id, 0x260, 0x20, true, 0xafb24caba7aa5fe5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif