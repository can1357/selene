#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::interrupt_type_t), "_DXGKARG_CONTROLINTERRUPT3.InterruptType", interrupt_type, 0x0, 0x20, true, 0x9f4446cfd1f48d51)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::interrupt_state_t), "_DXGKARG_CONTROLINTERRUPT3.InterruptState", interrupt_state, 0x20, 0x20, true, 0xcbfa6934c0cbd14a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::crtc_vsync_state_t), "_DXGKARG_CONTROLINTERRUPT3.CrtcVsyncState", crtc_vsync_state, 0x20, 0x20, true, 0xb5e55f16a26f5772)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CONTROLINTERRUPT3.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x1c30a1100c192a20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif