#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME.DeviceName", device_name, 0x0, 0x0, true, 0xb041e3ede6f810c1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME.VidPnSourceId", vid_pn_source_id, 0x200, 0x20, true, 0x2ada6a1e1fea6ff1)
#else
#define _m00
#define _m01
#endif