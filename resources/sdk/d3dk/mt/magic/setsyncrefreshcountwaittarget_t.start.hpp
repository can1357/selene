#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET.hAdapter", h_adapter, 0x0, 0x20, true, 0x43e7f4c5bcdc78e1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET.hDevice", h_device, 0x20, 0x20, true, 0x31a7a3bb6cc1904)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xaf43bc1529c3cdff)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET.TargetSyncRefreshCount", target_sync_refresh_count, 0x60, 0x20, true, 0x8a59c43544a8d7a3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif