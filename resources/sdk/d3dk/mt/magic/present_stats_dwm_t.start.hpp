#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS_DWM.PresentCount", present_count, 0x0, 0x20, true, 0xde37be3f88b5e7be)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS_DWM.PresentRefreshCount", present_refresh_count, 0x20, 0x20, true, 0x336a035556ddebd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_PRESENT_STATS_DWM.PresentQPCTime", present_qpc_time, 0x40, 0x40, true, 0xaacab67f0f664c4c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS_DWM.SyncRefreshCount", sync_refresh_count, 0x80, 0x20, true, 0xb925abc5a1e6f047)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_PRESENT_STATS_DWM.SyncQPCTime", sync_qpc_time, 0xc0, 0x40, true, 0x1c19aa1de3de76ed)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS_DWM.CustomPresentDuration", custom_present_duration, 0x100, 0x20, true, 0xb5c7f6055aeceacf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif