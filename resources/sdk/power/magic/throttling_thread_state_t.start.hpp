#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_THROTTLING_THREAD_STATE.Version", version, 0x0, 0x20, true, 0x3d82553c42397589)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_THROTTLING_THREAD_STATE.ControlMask", control_mask, 0x20, 0x20, true, 0xdbacc88e0c74ac2b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_THROTTLING_THREAD_STATE.StateMask", state_mask, 0x40, 0x20, true, 0x32b43bf363abef3d)
#else
#define _m00
#define _m01
#define _m02
#endif