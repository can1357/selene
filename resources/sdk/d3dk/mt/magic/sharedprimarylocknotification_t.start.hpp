#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x61377a2df8cdda44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x2679bcfd76f33797)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "_D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION.LockRect", lock_rect, 0x60, 0x80, true, 0x5739abaad954135)
#else
#define _m00
#define _m01
#define _m02
#endif