#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x7457a424638f0f8e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS.TargetId", target_id, 0x40, 0x20, true, 0x25ad2baf4775f05d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS.StopReason", stop_reason, 0x60, 0x20, true, 0x4b1c1d77f882baa6)
#else
#define _m00
#define _m01
#define _m02
#endif