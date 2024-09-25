#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS.PresentCount", present_count, 0x0, 0x20, true, 0x5dfcb52abf75a0ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS.PresentRefreshCount", present_refresh_count, 0x20, 0x20, true, 0x7bdb81e0d2ee71b4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_STATS.SyncRefreshCount", sync_refresh_count, 0x40, 0x20, true, 0x56e371438143d64d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_PRESENT_STATS.SyncQPCTime", sync_qpc_time, 0x80, 0x40, true, 0xe4d6f71695ab828b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_PRESENT_STATS.SyncGPUTime", sync_gpu_time, 0xc0, 0x40, true, 0x6125efdfa757b4c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif