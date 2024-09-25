#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x8846222db5532625)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x6e1f6e9612c7d4f3)
#else
#define _m00
#define _m01
#endif