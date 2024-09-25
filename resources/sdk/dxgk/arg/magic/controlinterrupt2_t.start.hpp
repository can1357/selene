#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::interrupt_type_t), "_DXGKARG_CONTROLINTERRUPT2.InterruptType", interrupt_type, 0x0, 0x20, true, 0x8eee9de8b4fadcdc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::interrupt_state_t), "_DXGKARG_CONTROLINTERRUPT2.InterruptState", interrupt_state, 0x20, 0x20, true, 0x11c37ed883e4a64e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::crtc_vsync_state_t), "_DXGKARG_CONTROLINTERRUPT2.CrtcVsyncState", crtc_vsync_state, 0x20, 0x20, true, 0x8a6c1c88ed5f9621)
#else
#define _m00
#define _m01
#define _m02
#endif